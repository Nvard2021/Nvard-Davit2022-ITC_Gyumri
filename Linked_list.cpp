#include <iostream>
using namespace std;

struct Node
{  
    int data;
    Node *next;
};
class List 
{
    private:
        Node *head;
    public:
        List()
        {
            head = NULL;

        }

        void addNode(int d){
            Node *node = new Node();
            node->data = d;
            node->next = NULL;
            if(head == NULL){
                head = node;
            }else {
                Node* temp = head;
                while(temp->next!= NULL){
                    temp = temp->next;
                }
                temp->next = node;
           }
        }
        void Delete (){
            Node *temp = head;
            head = head->next;
            delete temp;


        }
        void Print(){
            Node *current = head;
            
            while(current){
                cout << current->data << endl;
                current = current->next;
            }
        }
};
int main(){
11List obj;
 
obj.addNode(5);
obj.addNode(7);
obj.addNode(8);
obj.addNode(9);
obj.addNode(1);
obj.addNode(5);
obj.Print();
cout << "Delete node" << endl;
obj.Delete();
obj.Print();

return 0;


}
