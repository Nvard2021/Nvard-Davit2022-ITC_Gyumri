#include <iostream>
using namespace std;

int binery(int[],int,int);

int main(){
  int num = 0;
  cout << "Enter number: ";
  cin >> num;
  int arr[5] = {1,2,3,4,5};
  int size = sizeof(arr)/sizeof(int);
  cout << binery(arr,size,num) <<"\n";
}

int binery(int arr[],int size,int num){
  int low = 0;
  int high = size-1;
  int mid = (low + high)/2;
  while(low <= high){
    if(arr[mid] < num){
      low = mid+1;
    }
    if(arr[mid] > num){
      high = mid-1;
    }
    if(arr[mid] == num){
      return mid;
    }
    mid = (low + high)/2;
  }
 return -1;
}


