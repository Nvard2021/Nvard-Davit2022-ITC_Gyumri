#include <iostream>
using namespace std;
 
int search(int arr[], int size, int x)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == x)
            return x;
    return -1;
}
 
int main()
{
    int arr[] = { 5, 40, 41, 22, 17, 6};
    int x = 5;
    int size = sizeof(arr) / sizeof(arr[0]);
   
    int result = search(arr, size, x);
    if(result == -1){
        cout << "Element is not found";
	}else{
        cout << "Searched element is " << result << "\n";
	}
    return 0;
}
