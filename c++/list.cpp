#include <iostream>                                   
using namespace std;
   
  struct Node {
     int data;
     Node* next;
  };
  
  class List {
     private:
        Node* head;
     public:
        List(){
          head = NULL;
        }
  
      void insertNode(int newElement) {
        Node* newNode = new Node();
        newNode->data = newElement;
        newNode->next = NULL;
        if(head == NULL) {
          head = newNode;
        } else {
          Node* temp = head;
          while(temp->next != NULL)
            temp = temp->next;
            temp->next = newNode;
        }
      }
  
     /* Node* getHead(){
        return head;
      };*/
 
     void print() {
        Node* temp = head;
       if(temp != NULL) {
          while(temp != NULL) {
            cout<<temp->data<<" ";
            temp = temp->next;
          }
          cout<<"\n";
       }
     }
 };
 
 
 int main(){
      int size;
      cout <<"Enter size: ";
      cin >> size;
      List list;
      for(int i = 1;i<=size;i++){
         list.insertNode(i);
     }
 
     list.print();
 }


