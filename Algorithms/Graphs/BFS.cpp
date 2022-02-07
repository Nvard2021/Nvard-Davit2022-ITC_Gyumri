#include <iostream>
#include <map>
#include <list>
#include <queue>
#include <algorithm>
using namespace std;

class Graph {
	map<int, list<int>> l;
	
	public:
	
		void addEdge (int x, int y){
			l[x].push_back(y);
			l[y].push_back(x);
		}

		void bfs_func (int src){
			map<int, int> visited;
			queue<int> q;

		q.push(src);
		visited[src] = true;
  
		cout << "====Visited vertexes====\n";
		while (!q.empty()){
			int node = q.front();
			q.pop();
			cout << node << " ";

			list<int> our_list = l[node];

			for (int nbr = 0; nbr < our_list.size(); nbr++){
				list<int>::iterator it = our_list.begin();
				advance(it, nbr);

				if(!visited[*it]){
					q.push(*it);
					visited[*it] = true;
				}
			}
		}
		cout << endl;			
	}
};

int main(){
	Graph g;
	g.addEdge(0, 1);
	g.addEdge(1, 2);
	g.addEdge(1, 3);
	g.addEdge(2, 3);
	g.addEdge(2, 4);
	g.addEdge(3, 4);

	g.bfs_func(0);
	return 0;
}
