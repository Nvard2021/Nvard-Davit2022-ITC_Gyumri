#include<iostream>
using namespace std;

template<typename T>class Node{
    public:
        T data;
        Node<T>* next;
        
    public:
        Node(){
            this->next = NULL;
        }
};


   template<typename T>class LinkedList{
    private:
        Node<T>* head;
    public:
        LinkedList(){
            this->head = NULL;
        }

        void add(T item){
            Node<T>* node = new Node<T>[1];
            node->data = item;
            if(head == NULL){
                head = node;
              
                return;
            }
            Node<T>* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = node;
            
        }


       int size(){
            int len = 0;
            Node<int>* temp = head;
            while(temp != NULL){
                len++;
                temp = temp->next;
            }
            return len;
        }

    
      void delete_first_item() {
           Node<int>* temp = head;
           head = head->next;
           delete temp;
  
         }

        void delete_last_item() {
          Node<int>* temp = head;
          Node<int>* prev = NULL;
          while(temp && temp->next != NULL){
              prev = temp;
              temp = temp->next;
          }
  
          prev->next = NULL;
          
          delete temp;
      }

    T get_value(int index){
 

       int count = 0;
            T res;
            Node<T>* temp = head;
            while(temp != NULL){
                if(count++ == index){
                    res = temp->data;
                   break;
                }
                temp = temp->next;
            }
            return res;



  }

     void print(){
            if(head == NULL){
               
                return;
            }
            
            Node<T>* temp = head;
            while(temp != NULL){
                cout<<temp->data<<endl;
                temp = temp->next;
            }
           
        }
};


int main(){
  int length;
   
    LinkedList<int> list;
   

     list.add(10);
     list.add(20);
     list.add(30);
     list.add(40);
     list.delete_first_item();
     list.delete_last_item();
     cout<< list.get_value(0)<<endl;
     list.print();
     length=list.size();
     cout<< length <<endl;


   return 0;
}
