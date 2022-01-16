#include <iostream>
using namespace std;

template <class T>
class Vector {
   private:
     T* arr;
     int size;
     int capacity = 2;
   public:
     Vector(){
       arr = new T[1];
       capacity = 1;
       size = 0;
     }

     void addNum(){
       int num = 0;
       cout << "Enter num: ";
       cin >> num;
       if(num < capacity){
         T* temp = new T[2 * capacity];
         for(int i = 0;i < capacity;i++){
            temp[i] = arr[i];
         }

         delete[] arr;
         capacity *= 2;
         arr = temp;
       
       }
       arr[size] = num;
       size++;
     }
    
    void printNum(){
       for(int i = 0;i < size; i++){
           cout << arr[i] <<" ";
       }
       cout <<"\n";
    }
};


int main(){
   int size = 0;
   int i = 0;
   char ans;
   cout << "Enter size: ";
   cin >> size;
   Vector<int> V;
  /* do { 
      V.addNum();
      cout << "If you want add element press 1: ";
      cin >> ans;
      i++;
   } while(ans == "n");*/
   for(int i = 1;i < size;i++){
       V.addNum();
   }
   V.printNum();
}



