#include <iostream>
using namespace std;

int linear(int[],int,int);

int main(){
  int num = 0;
  cout << "Enter number: ";
  cin >> num;
  int arr[5] = {1,5,3,4};
  int size = sizeof(arr)/sizeof(int);
  cout << linear(arr,size,num) <<"\n";
}


int linear(int arr[],int size,int num){
  for(int i = 0;i<size;i++){
   if(num == arr[i]){
     return i;
   }
  }
  return -1;
}


