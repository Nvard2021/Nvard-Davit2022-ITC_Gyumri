#include <iostream>
using namespace std;

void shellSort(int[],int);
void printArr(int[],int);

int main(){
  int arr[5] = {10,20,5,11,6};
  int size = sizeof(arr)/sizeof(int);
  shellSort(arr,size);
  printArr(arr,size);
}

void shellSort(int arr[],int size){
  int gap = size / 2;
   while(gap > 0){
    for(int i = gap;i <size;i++){
      int j = i;
      int temp = arr[i];
      while(j >= gap && arr[j-gap] > temp){
        arr[j] = arr[j-gap];
        j = j - gap;
      }
      arr[j] = temp;
    }
  }
}

void printArr(int arr[],int size){
  for(int i=0;i<size;i++){
    cout << arr[i] <<", ";
  }
  cout <<"\n";
}





