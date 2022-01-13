#include <iostream>

int minimum(int[],int);
int maximum(int[],int); 

int main(){
  int min[3] = {10,8,6};
  int max[3] = {1,8,6};
  int sizeN = sizeof(min)/sizeof(int); 
  int sizeM = sizeof(max)/sizeof(int); 
  std::cout << minimum(min,sizeN) <<"\n";
  std::cout << maximum(max,sizeM) <<"\n";
}

int minimum(int min[],int size){
  int m = min[0];
  for(int i = 0 ; i < size;i++){
    if(m > min[i]){
       m = min[i];
    }
  }
  return m;
}


int maximum(int min[],int size){
   int m = min[0];
    for(int i = 0 ; i < size;i++){
       if(m < min[i]){
          m = min[i];
       }
    }
   return m;
}




