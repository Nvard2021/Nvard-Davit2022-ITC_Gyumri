#include <iostream>

template <typename T>
T minimum(T[],int);
template <typename U>
U maximum(U[],int); 

int main(){
  float min[3] = {10,8,6};
  float max[3] = {1,8.7,6};
  int sizeN = sizeof(min)/sizeof(int);
  int sizeM = sizeof(max)/sizeof(int);
  std::cout << minimum<float>(min,sizeN) <<"\n";
  std::cout << maximum<float>(max,sizeM) <<"\n";
}

template <typename T>
T minimum(T min[],int size){
  T m = min[0];
  for(int i = 0 ; i < size;i++){
    if(min[i] < m){
       m = min[i];
    }
  }
  return m;
}

template <typename U>
U maximum(U max[],int size){
   U m = max[0];
   for(int i = 0 ; i < size;i++){
      if(m < max[i]){
         m = max[i];
      }
   }
   return m;
}




