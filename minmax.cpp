#include <iostream>
using namespace std;

int minimum(int[],int);
int maximum(int[],int);

int main(){

  int arr[5] = {4, 15, 7, 80, 7};
  int sizeofarr = sizeof(arr)/sizeof(arr[0]);
  cout <<"The minimum value is: " << minimum(arr,sizeofarr) <<"\n";
  cout <<"The maximum value is: " << maximum(arr,sizeofarr) <<"\n";
}

int minimum(int arr[],int sizeofarr){
  int m = arr[0];
  for(int i = 0 ; i < sizeofarr; i++){
    if(m > arr[i]){
       m = arr[i];
    }
  }
  return m;
}


int maximum(int arr[],int sizeofarr){
   int m = arr[0];
   for(int i = 0 ; i < sizeofarr; i++){
      if(m < arr[i]){
         m = arr[i];
      }
   }
   return m;
}

