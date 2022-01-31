#include<iostream>
using namespace std;

void print (int arr[], int size){
 for (int i = 0; i < size; i++){
  cout << arr[i] << " ";
 }
 cout << endl;
}

void insertion_sort (int arr[], int size){
 for(int n = 1; n < size; n++) {
  int key = arr[n];
  int j = n - 1;

  while(key < arr[j] && j >= 0){
   arr[j +1] = arr[j];
   --j;
  } 
 arr[j + 1] = key;
 } 
}

 int main(){
 int arr[] = {70, 4, 2, 15, 3, 8, 19};
 int size = sizeof(arr) / sizeof(arr[0]);
 cout  << "Array before sorting \n";
 print(arr, size);
 cout  << "Array after sorting \n";
 insertion_sort(arr, size);
 print(arr, size);
  
}
