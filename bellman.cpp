 #include<iostream>
#include <climits>
using namespace std;

struct Edge{
    int src;
    int dest;
    int weight;
};

struct Graph{
    int vertex;
    int edges;
    struct Edge* edge;
};

struct Graph* create(int vertex, int edges){
    struct Graph* graph = new Graph;
    graph->vertex = vertex;
    graph->edges = edges;
    graph->edge = new Edge[edges];
    return graph;
}

void print(int arr[], int size){
    for (int j = 0; j < size; j++) {
        cout<<arr[j]<<"\n";
    }
}

void BellmanFord(struct Graph* graph, int u) {
    int vertex = graph->vertex;
    int edges = graph->edges;
    int dist[vertex];

    for (int i = 0; i < vertex; i++){
        dist[i] = INT_MAX;
    }
    dist[u] = 0;

    for (int i = 1; i <= vertex - 1; i++) {
        for (int j = 0; j < edges; j++) {
                    int src = graph->edge[j].src;
            int dest = graph->edge[j].dest;
            int weight = graph->edge[j].weight;
                if (dist[src] != INT_MAX && dist[src] + weight < dist[dest])
                dist[dest] = dist[src] + weight;
        }
    }

    for (int i = 0; i < edges; i++) {
        int src = graph->edge[i].src;
        int dest = graph->edge[i].dest;
          int weight = graph->edge[i].weight;
 if (dist[src] != INT_MAX && dist[src] + weight < dist[dest]) {
             cout<<"Graph has a negative weight \n";
                 return;
         }
     }
     print(dist, vertex);
 
     return;
 }
 
 int main() {
     int vertex = 3;
     int edges = 3;
     struct Graph* graph = create(vertex, edges);
 
     graph->edge[0].src = 0;
     graph->edge[0].dest = 1;
     graph->edge[0].weight = -7;
 
     graph->edge[1].src = 1;
     graph->edge[1].dest = 2;
     graph->edge[1].weight = 5;
 
     graph->edge[2].src = 2;
     graph->edge[2].dest = 0;
     graph->edge[2].weight = 1;
 
     BellmanFord(graph, 0);
     return 0;
 }

