#include <iostream>
using namespace std;

void buble(int[],int);

int main(){
  int arr[6] = {10,4,7,5,2,6};
  int size = sizeof(arr)/sizeof(int);
  buble(arr,size);
}


void buble(int arr[],int size){
  for(int i = 0;i < size;i++){
    for(int j = 0;j < size;j++){
     if(arr[j] < arr[j+1]){
       int temp = arr[j];
       arr[j] = arr[j+1];
       arr[j+1] = temp;
     }
   }
   cout << arr[i] <<"\n";
  } 
}


