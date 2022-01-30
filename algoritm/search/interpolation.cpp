#include <iostream>
using namespace std;
int interpolationSearch(int[],int,int);

int main(){
  int num = 0;
  cout << "Enter your number: ";
  cin >> num;
  int arr[5] = {10,5,4,6,8};
  int size = sizeof(arr)/sizeof(int);
  cout << interpolationSearch(arr,size,num) <<"\n";
}


int interpolationSearch(int arr[],int size,int num){
   int st = 0;
   int end = size-1;
   int mid;
   while(st <= end){
    mid = st + ((end-st)*(num -arr[st])/(arr[end]-arr[st]));
     if(arr[mid] == num){
       return mid;   
     } else if(arr[mid] < num) {
       st = mid + 1;
     } else {
       end = mid - 1;
     }
   } 
   return -1;
}


