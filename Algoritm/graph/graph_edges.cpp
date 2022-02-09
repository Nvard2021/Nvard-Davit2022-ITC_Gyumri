#include <iostream>
#include <vector>
#include <utility>
#include <algorithm> //for find

class Graph {
	private:
		std::vector < std::pair <int, int> > edges;
		std::vector <int> vertexes;
		bool check_edge_existance(int vertex1, int vertex2){
			for (int i = 0; i < edges.size(); i++){
				// std::pair <int, int> pair1 = std::pair(vertex1, vertex2);
				// std::find(edges.begin(), edges.end(), pair1);
				if(edges[i].first == vertex1 && 
					 edges[i].second == vertex2 || 
					 (edges[i].first == vertex2 && edges[i].second == vertex1)){
							return true;
				}
				return false;
			}
		}
	public:
		void add_vertex(int vertex);
		void add_edge(int vertex1, int vertex2){
			bool result = check_edge_existance(vertex1,vertex2);
			if (!result){
				 std::pair <int, int> new_edge(vertex1, vertex2);
				 edges.push_back(new_edge);
				 std::cout << "push\n";
			}
		}
		void add_edge(std::pair <int, int> edge);
		void print_graph();
		Graph();
		Graph(const Graph &graph);
};

int main(){
	Graph graph = Graph();
	graph.add_edge(1,2);
	graph.add_edge(2,2);
	graph.add_edge(2,1);
}
