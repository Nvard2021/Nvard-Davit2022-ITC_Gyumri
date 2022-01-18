#include <iostream>
using namespace std;

template<typename T>
void bubble_sort(T a[]) {
    for(T i=0;i<5;i++) {
         for(T j=0;j<(5-i-1);j++) {
            if(a[j]>a[j+1]) {
               T r = a[j];
                 a[j] = a[j+1];
                 a[j+1] = r;
                         }
                 }
         }
 }
 
 int main() {
         int arr[5];
         cout << "Enter 5 numbers: "<< "\n";
         for(int i=0;i<5;i++) {
            cin >> arr[i];
         }
 
         bubble_sort(arr);
 
         for(int i=0;i<5;i++) {
                 cout << arr[i] << " " << "\n";
         }
         return 0;
 }
