#include <iostream>

int* sortNum(int[],int);

int main(){
  int num[3] = {1,8,6};
  int size = sizeof(num)/sizeof(int);
  int *arr = sortNum(num,size);
  for(int i = 0;i<size;i++){
      std::cout << arr[i] <<"\n";
  }
}


int* sortNum(int num[],int size){
    for(int i = 0;i < size;i++){
     for(int j = 0; j < size; j++){
       if(num[j] > num[j+1]){
          int temp = num[j];
          num[j] = num[j+1];
          num[j+1] = temp;
      }          
     }
    }
   return num;
}
