#include <iostream>
using namespace std;
     class Stack {
   private:
    int size;
    int *Arr;
    int top;
  public:
    Stack(){
    top = -1;
    size = 2;
    Arr = new int[size];
       }
    
 void Push (int x){
   if (top == size -1){
    cout << "Error, stack overFlow!" << endl;
    return;
   }

Arr[++top] = x;
}
 void Pop() {
  if (top == -1){

   cout << "Error, stack is Empty!" << endl;
   return;
  }

top --;

}
  int Top() {
  return Arr[top];

  }
  bool IsEmty() {

  if (top == -1){
    return 1;
  }  
    return 0;
 }

  void print(){

  cout << "Stack:" ;
  for (int i = 0; i <= top; i++){
   cout << Arr[i] << " " ;
  }
   cout << "\n";

  }
    
 };
int main (){
 Stack s;
 s.Push(1);
 s.Push(2);
 s.print();

return 0;

}
