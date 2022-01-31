#include <iostream>
#include <vector>
 
struct Edge {
	int src;
	int data;
};
 
class Graph{
	public:
    		std::vector<std::vector<int>> adj_list;
 
    		Graph(std::vector<Edge> const &edges, int n){
        		adj_list.resize(n);
 
	        	for (auto &edge: edges){
        	    		adj_list[edge.src].push_back(edge.data);
        		}
    		}
};
 
void print_graph(Graph const &graph, int n){
	for (int i = 0; i < n; i++) {
        	std::cout << "\nVertex "<< i << " ——> ";
        
		for (int v: graph.adj_list[i]) {
            		std::cout << v << " ";
        	}
        std::cout << std::endl;
    	}
}
 
int main(){
    	std::vector<Edge> edges = {{0, 1}, {0, 3}, {0, 2}, {1, 0}, {1, 3}, {1, 4}, {2, 0}, {2, 3}, {3, 2}, {3, 0}, {3, 1}, {3, 4}, {4, 1}, {4, 3}};
    	int n = 5;
    	Graph graph(edges, n);
    	print_graph(graph, n);
 
    	return 0;
}

