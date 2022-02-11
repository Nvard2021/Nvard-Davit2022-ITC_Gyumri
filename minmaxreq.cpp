# include<iostream>
using namespace std;

int findMax(int arr[], int ind, int size){
    int max;
    if(ind >= size - 2){
        if(arr[ind] > arr[ind + 1]){
          return arr[ind];
    }
        else{
          return arr[ind + 1];
    }
    }
    max = findMax(arr, ind + 1, size);
    if(arr[ind] > max){
       return arr[ind];
    }
    else{
       return max;
    }
}

int findMin(int arr[], int ind, int size){
    int min;
    if(ind >= size - 2){
        if(arr[ind] < arr[ind + 1]){
          return arr[ind];
    }
        else{
          return arr[ind + 1];
    }
    }

    min = findMin(arr, ind + 1, size);
    if(arr[ind] < min){
       return arr[ind];
    }
    else{
       return min;
    }
}

int main()
{
    int arr[] = {155, 7, 2, 100, 57};
    int l = sizeof(arr) / sizeof(arr[0]);
    int max, min;
    max = findMax(arr, 0, l);
    min = findMin(arr, 0, l);
    cout << "Maximum value in array is: " << max << endl;
    cout << "Minimum value in array is: " << min << endl;
    return 0;
}

