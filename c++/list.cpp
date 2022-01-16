#include <iostream>                                   
using namespace std;

template <class T>
struct Node {
   T data;
   Node<T>* next;
};
  
template <class T>
class List {
   private:
      Node<T>* head;
   public:
      List(){
       head = NULL;
      }
  
      void insertNode(T newElement) {
        Node<T>* newNode = new Node<T>();
        newNode->data = newElement;
        newNode->next = NULL;
        if(head == NULL) {
          head = newNode;
        } else {
          Node<T>* temp = head;
          while(temp->next != NULL)
            temp = temp->next;
            temp->next = newNode;
        }
      }

      void removeLast(){
        Node<T>* temp = head;
         while(temp != NULL){
          if(temp->next->next == NULL){
             temp->next = NULL;
          }
          temp = temp->next;
        }
      }
      
      void removeFirst(){
        head = head->next;
      }
      
      T getNode(int index){
         Node<T>* temp = head;
         int c = 0;
         T node;
         
         while(temp != NULL){
          if(c == index){
             node = temp->data;
          }
          c++;
          temp = temp->next;
         }
         return node;
      }

      void print(){
         Node<T>* temp = head;
          while(temp != NULL) {
            cout<< temp->data<<" ";
            temp = temp->next;
          }
          cout<<"\n";
      }
 };
 
 
 int main(){
      int size;
      cout <<"Enter size: ";
      cin >> size;
      List<int> list;
      for(int i = 1;i<=size;i++){
         list.insertNode(i);
     }

     list.removeLast(); 
     list.removeFirst();
     list.getNode(1);
     list.print();
 }


