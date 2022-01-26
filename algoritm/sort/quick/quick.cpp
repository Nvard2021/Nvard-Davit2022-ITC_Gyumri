#include <iostream>
using namespace std;

int part(int[],int,int);
void quick(int[],int,int);
void printArr(int[],int);


int main(){
  int arr[] = {10,5,7,8,9};
  int size = sizeof(arr)/sizeof(int);
  quick(arr,0,size-1);
  printArr(arr,size);
}

int part(int arr[],int start,int end){
  int pivot = arr[end];
  int i = (start - 1);
  for(int j = start;j<=end-1;j++){
     if(arr[j] < pivot){
       i++;
       int t = arr[i];
       arr[i] = arr[j];
       arr[j] = t;
     }
  }

  int t = arr[i+1];
  arr[i+1] = arr[end];
  arr[end] = t;
  return (i+1); 
}


void quick(int arr[],int start,int end){
  if(start < end){
    int p = part(arr,start,end);
    quick(arr,start,p-1);
    quick(arr,p+1,end);
  }
}

void printArr(int arr[],int size){
  for(int i=0;i<size;i++){
    cout << arr[i] <<",";
  }
  cout <<"\n";
}



