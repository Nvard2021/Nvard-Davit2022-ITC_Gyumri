#include <iostream>
using namespace std;

void mergeSort(int[],int);

int main(){
  int arr[6] = {10,15,2,17,8,9};
  int size = sizeof(arr)/sizeof(int);
  mergeSort(arr,size);
}


void mergeSort(int arr[],int size){
  int left = size/2
  int a[left] = arr[size/2];
  for(int i = 0;i < left;i++){
    cout << a[i] <<" ";  
  }
}



