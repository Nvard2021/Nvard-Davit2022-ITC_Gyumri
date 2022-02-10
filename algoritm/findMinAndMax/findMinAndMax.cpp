#include <iostream>
#include <climits>
using namespace std;

void findMinAndMax(int[],int,int,int&,int&);

int main() {
    int nums[4] = { 7, 2, 9, 3};
    int max = INT_MIN, min = INT_MAX;
    int n = sizeof(nums)/sizeof(int);
    findMinAndMax(nums, 0, n - 1, min, max);
    cout <<"\n"; 
    cout << "The minimum array element is " << min << endl;
    cout << "The maximum array element is " << max << endl;
    return 0;
}


void findMinAndMax(int nums[], int i, int j, int &min,int &max){
    if (i == j){
       if (max < nums[i]) {           
           max = nums[i];
       }
       if (min > nums[j]) {         
           min = nums[j];
       }
      return;
    }
 
    if (j - i == 1) {
      if (nums[i] < nums[j]){
        if (min > nums[i]) {       
            min = nums[i];
        }
        if (max < nums[j]) {  
            max = nums[j];
        }
      } else {
         if (min > nums[j]) { 
             min = nums[j];
         }
         if (max < nums[i]) {
             max = nums[i];
         }
      }
      return;
    }
 
    int mid = (i + j) / 2;
    findMinAndMax(nums, i, mid, min, max);
    findMinAndMax(nums, mid + 1, j, min, max);
}
 

