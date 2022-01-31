#include<iostream>
using namespace std;
void swap (int *a, int *b){
 int temp = *a;
 *a = *b;
 *b = temp;
}

void print (int arr[], int size){
 for (int i = 0; i < size; i++){
  cout << arr[i] << " ";
 }
 cout << endl;
}

void sellection_sort (int arr[], int size){
 for (int n = 0; n < size - 1; n++){
  int min_index = n;
  for(int i = n + 1; i < size; i++){
   if (arr[i] < arr[min_index]){
    min_index = i;
   }
  }
 swap(&arr[min_index], &arr[n]);
 }
}

int main(){
 int arr[] = {1, 7, 2, 9, 3, 51, 5};
 int size = sizeof(arr) / sizeof(arr[0]);
 cout << "Array before sorting \n"; 
 print(arr, size);
 sellection_sort(arr, size);
 cout << "\n Array after sorting \n";
 print(arr, size);
}
