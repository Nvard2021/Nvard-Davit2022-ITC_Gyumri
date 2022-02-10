#include<iostream>
#include<vector>
using namespace std;

class Map{
public:
    int key;
    Map *next;
    vector<int> values;

    bool checkVertexExistance(int v){
            for (int i = 0; i < values.size(); i++)        {
                if (v == values[i]){
                        return true;
                    }
            }
            return false;
        }

    void addVertex(int v){
        bool result = checkVertexExistance(v);
            if(!result){
            key = v;
//          cout<<key;
            }

    }

    void addEdge(int v1, int v2){
        values = {v1, v2};
//      cout<<values.at(0)<<", "<<values.at(1)<<"\n";
    }

};

int main(){
    Map graphMap;
    graphMap.addVertex(1);
    graphMap.addEdge(1,2);

    Map graphMap1;
    graphMap1.addVertex(2);
    graphMap1.addEdge(2,3);

    Map graphMap2;
    graphMap2.addVertex(3);
    graphMap2.addEdge(3,1);

    graphMap.next = &graphMap1;
    graphMap1.next = &graphMap2;
    graphMap2.next = &graphMap;

    cout<<graphMap.key<<"-->"<<graphMap.next->key<<", "<<graphMap1.next->key<<"\n";
    cout<<graphMap1.key<<"-->"<<graphMap1.next->key<<", "<<graphMap2.next->key<<"\n";
    cout<<graphMap2.key<<"-->"<<graphMap2.next->key<<", "<<graphMap.next->key<<"\n";

    cout<<"\n----------------------------------------------------------------\n";
    cout<<graphMap.key<<"-->"<<graphMap.next->values.at(0)<<", "<<graphMap.next->values.at(1)<<"\n";

    cout<<"\n----------------------------------------------------------------\n";
    cout<<graphMap.key<<"-->"<<graphMap.values.at(1)<<", "<<graphMap.next->values.at(1)<<"\n";

//  graphMap.printGrafWithEdges();

    return 0;
}

