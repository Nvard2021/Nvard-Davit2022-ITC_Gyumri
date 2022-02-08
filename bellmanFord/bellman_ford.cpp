#include <iostream>
#include <limits>
#include <list>
using namespace std;

class Vertex{
public:

  char name;
  

  double distance; 

  Vertex(char name){
    this->name = name;
    this->distance = numeric_limits<double>::infinity();
  }
};

class Edge{
public:
  
  Vertex* from;
  
  Vertex* to;
  
  double cost;

  Edge(Vertex *from, Vertex* to, double cost){
    this->from = from;
    this->to = to;
    this->cost = cost;
  }
};

class BellmanFord{
public:

  bool findPath(Vertex* source, list<Edge*> edges, int v){
    
    source->distance = 0;

    
    for(int i=1; i<=(v-1); i++){
      for(Edge* edge: edges){
        if(edge->from->distance + edge->cost < edge->to->distance)
          edge->to->distance = edge->from->distance + edge->cost;
      }
    }


    for(Edge* edge: edges){
      if(edge->from->distance + edge->cost < edge->to->distance){
        cout << "Graph has a negative cycle";
        return false;
      }
    }

    return true;
  }
};

int main() {
  
  Vertex* vertices[] = {new Vertex('A'), new Vertex('B'), new Vertex('C')};
  
  list<Edge*> edges {new Edge(vertices[0], vertices[1], 10), 
                 new Edge(vertices[1], vertices[2], 10),
                 new Edge(vertices[0], vertices[2], 30)};
  
  BellmanFord bellmanFord;
  
  if(bellmanFord.findPath(vertices[0], edges, 3))
    
    for(Vertex* vertex: vertices){
      cout << "A->" << vertex->name << ": " << vertex->distance << "\n";
    }
}