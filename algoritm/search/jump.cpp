#include <iostream>
#include <cmath>
using namespace std;

int jumpSearch(int[],int,int);

int main(){
  int num = 0;
  cout << "Enter number: ";
  cin >> num;
  int arr[5] = {5,10,9,8,7};
  int size = sizeof(arr)/sizeof(int);
  cout << jumpSearch(arr,size,num) <<"\n";
}

int jumpSearch(int arr[],int size,int num){
  int i = 0;
  int m = sqrt(size);
  while(arr[min(m,size)] < num){
    i = m;
    m+=sqrt(size);
    if(i >= size){
       return -1;
    }
  }
  
  for(int i = 0;i < m;i++){
    if(arr[i] == num){
      return i;
    }
  }
  return -1;
}


