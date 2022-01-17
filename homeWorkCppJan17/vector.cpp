 #include <iostream>
 using namespace std;

 
  class Vector{

    int* arr;
    int  capacity;
    int current;
 
  public:
   Vector(){

       arr = new int[1];
        capacity = 1;
        current = 0;
   
   }

   void push(int data){


       if (current == capacity) {
            int* temp = new int[2 * capacity];
 
          
            for (int i = 0; i < capacity; i++) {
                temp[i] = arr[i];
            }
 
            delete[] arr;
            capacity *= 2;
            arr = temp;
        }
        arr[current] = data;
        current++;

   }
    
       void print() {
        for (int i = 0; i < current; i++) {
            cout << arr[i] <<endl;
        }
        
    }

      int size() {
        return current; 
       }


      int getcapacity() { 
        return capacity; 
      }
    
     int get_item(int index) {
 
        if (index < current)
            return arr[index];
    }
};

  

int main(){

 Vector v;
 v.push(10);
 v.push(20);
 v.push(30);
 v.push(40);

 v.print();
   cout<< v.size()<<endl;
   cout<< v.getcapacity()<<endl;
   cout<<v.get_item(1)<<endl;
  return 0;
}
