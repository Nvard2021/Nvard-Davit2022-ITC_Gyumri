#include<iostream>
using namespace std;

class Node {
	public:
        int element;
    	Node* next;
};

void print(Node* i){
    while (i != NULL) {
        cout << i->element << " ";
        i = i->next;
    }
    cout << "\n";
}
 
int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* forth = NULL;
 
    head = new Node();
    second = new Node();
    third = new Node();
    forth = new Node();
 
    head->element = 1;
    head->next = second;
 
    second->element = 2;
    second->next = third;


    third->element = 3;
    third->next = forth;
 
    forth->element = 4;
    forth->next = NULL;
 
    print(head);
 
    return 0;
}
