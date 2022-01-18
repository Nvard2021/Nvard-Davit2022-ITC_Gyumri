#include <iostream>
using namespace std;

template <typename T>
T minimum(T[], T);

template <typename T>
T maximum(T[], T);

int main(){
  int arr[5] = {4, 15, 7, 80, 7};
  int sizeofarr = sizeof(arr)/sizeof(arr[0]);
  cout <<"The minimum value is: " << minimum(arr, sizeofarr) <<"\n";
  cout <<"The maximum value is: " << maximum(arr, sizeofarr) <<"\n";
}

template <typename T>
T minimum(T arr[], T sizeofarr){
  T m = arr[0];
  for(T i = 0 ; i < sizeofarr; i++){
    if(m > arr[i]){
       m = arr[i];
    }
  }
  return m;
}

template <typename T>
T maximum(T arr[], T sizeofarr){
   T m = arr[0];
   for(T i = 0 ; i < sizeofarr; i++){
      if(m < arr[i]){
         m = arr[i];
      }
   }
   return m;
}

