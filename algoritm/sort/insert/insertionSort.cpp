#include <iostream>
using namespace std;

void insertionSort(int[],int);
void printArr(int[],int);

int main(){
  int arr[6] = {5,10,6,7,8,9};
  int size = sizeof(arr)/sizeof(int);
  insertionSort(arr,size);
  printArr(arr,size);
}


void insertionSort(int arr[],int size){
   int j;
   for(int i = 1;i < size;i++){
     int temp = arr[i];
     j = i - 1;
     while(j>=0 && temp <=arr[j]){
       arr[j+1] = arr[j];
       j = j-1;
     }
     arr[j+1] = temp;
   }
}

void printArr(int arr[],int size){
   for(int i = 0;i <size;i++){
     cout << arr[i] <<", ";
   }
   cout <<"\n";
}




