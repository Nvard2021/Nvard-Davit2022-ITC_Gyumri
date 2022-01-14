#include <iostream>
using namespace std;

int min(int min[], int size);
int max(int max[], int size);
template <typename T>
T factorial(T N){
    if (N>1){
     return N*factorial(N-1);
     }
       return 1;
      
    }



int  main(){
   int arr[3]= {10, 15, 3};
   int sizeArray = sizeof(arr)/sizeof(int);
    int a =  min(arr, sizeArray);
    int b = max(arr,sizeArray);
   int  N = 6;
   int ardyunq = factorial<int>(N);
  cout << "factorial " << N << " , " << "Ardyunq" << ardyunq << endl;
   cout  << "min" << a <<", " << "max" << b << endl;
  return 0;
 }


int min(int min[], int size){
 int m = min[0];
 for (int i =0; i < size; i++){
 if (m > min[i])
   m = min[i];
  
 }
  return m;
 

}
 int max(int max[], int size){
  int n = max[0];
  for (int j = 0; j < size; j++){
  if (n < max[j])
  n = max[j];


  }
  return n;
  
 }
