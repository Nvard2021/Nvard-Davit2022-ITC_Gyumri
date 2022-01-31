#include <iostream>
#include <vector>

void addEdge(std::vector<int> adj[], int u, int v) {
	adj[u].push_back(v);
}

void printGraph(std::vector<int> adj[]){
	for (int v = 0; v < 5; ++v) {
		std::cout << "\nVertex " << v << " ——> ";
	
		for(int j = 0; j < adj[v].size(); j++){
			std::cout << adj[v][j] << " ";
		}
	std::cout << std::endl;
	}
}

int main() {
	int V = 5;
	std::vector<int> adj[V];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 3);
	addEdge(adj, 0, 2);
	addEdge(adj, 1, 0);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 0);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 2);
	addEdge(adj, 3, 0);
	addEdge(adj, 3, 1);
	addEdge(adj, 3, 4);
	addEdge(adj, 4, 1);
	addEdge(adj, 4, 3);
	printGraph(adj);
	return 0;
}

