#include <iostream>
#include <vector>
using namespace std;
// void add_vertex(int graph[5][5], int vertex1, int vertex2){
// 	graph[vertex1 - 1][vertex2 - 1] = 1;
// 	// graph[vertex1].push()
// }
// void print_matrix(int graph[5][5]){

// 	for(int i = 0; i < 5; i++){
// 		for (int j = 0; j < 5; j++){
// 			cout << graph[i][j] << " ";
// 		}

// 		cout << endl;
// 	}

// }


void add_vertex(vector<int> graph[], int vertex1, int vertex2){
	graph[vertex1].push_back(vertex2);
}

void print_graph(vector<int> graph[]) {
	for (int i = 0; i < 5; i++) {
		cout << "Vertex  " << i + 1 << endl;
		for (int j = 0; j < graph[i].size(); j++) {
			cout << graph[i][j] + 1 << " -> ";
		}
		cout << endl;
	}
}


void print_matrix(vector<int> graph[]){

	for(int i = 0; i < 5; i++){
		for (int j = 0; j < graph[i].size(); j++){
			cout << graph[i][j] + 1 << " ";
		}

		cout << endl;
	}

}

void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v) {
        cout << "\n Adjacency list of vertex " << v + 1
             << "\n head ";
		for (size_t j = 0; j < adj[v].size(); j++) {
			cout << "-> " << adj[v][j] + 1;
		}
		
        printf("\n");
    }
}

int main(){
	int number = 5;
	//cout << "Enter number of vertex :" << endl;
	//cin >> number;
	vector<int> graph[number];
	// int graph[5][5] = {0};
	add_vertex(graph, 0, 1);
	add_vertex(graph, 0, 2);
	add_vertex(graph, 0, 3);
	add_vertex(graph, 1, 0);
	add_vertex(graph, 1, 3);
	add_vertex(graph, 2, 0);
	add_vertex(graph, 2, 3);
	add_vertex(graph, 3, 0);
	add_vertex(graph, 3, 1);
	add_vertex(graph, 3, 2);
	// add_vertex(graph, 4, 4);

	print_graph(graph);

	printGraph(graph, 5);
	print_matrix(graph);

	return 0;
}
