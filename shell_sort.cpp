#include <iostream>
using namespace std;

int shell_sort( int arr[], int n){
  for (int gap = n/2; gap > 0; gap /=2){
  for (int i = gap; i < n;i += 1){
     int temp = arr[i];
     int j;
  for (j =i; j >= gap && arr[j - gap] > temp; j -= gap){
     arr[j] = arr[j - gap];
 }
   arr[j] = temp;
 } 

}
return 0;
}
    void print_array(int arr[], int n){
  for (int i = 0; i < n; i++)
  cout << arr[i] << " ";
  cout << endl;
}
 int main(){
 int arr[] = {12, 34, 54, 2, 3}, i;
 int n = sizeof(arr)/sizeof(arr[0]);
  cout << "Array before sorting: \n";
   print_array(arr,n);
   shell_sort(arr, n);
  
  return 0;
}
