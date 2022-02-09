#include <iostream>
#include <vecktor>
using namespace std;

void add_vertex(vector<int> graph[], int vertex1, int vertex2) 
     graph[vertex1][vertex2] = 1;




}






void print_matrix(vector<int> graph[],){
     for(int i = 0; i < 5; i++)
       for(int j = 0; j < 5; j++){
         cout << graph[i][j] << " ";
}
    cout << endl;
}


 int main() {
    int number;
    cout << "Enter number of vertex" << endl;
    cin >> number;
    vector<int>graph[number];
    add_vertex(grap, 1, 2);
    add_verttex(graph, 1,3);
    add_vertex(greph 1,4);
    add_vertec(greph 
