#include <bits/stdc++.h>
using namespace std;

int findMax(int arr[], int low, int high)
{
  if (low == high)
        return arr[low];
     
    if ((high == low + 1) && arr[low] >= arr[high])
        return arr[low];
     
    if ((high == low + 1) && arr[low] < arr[high])
        return arr[high];

		int mid = (low + (high - low)/2);
		
	if ( arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
		return arr[mid];
	
	if (arr[mid] > arr[mid + 1] && arr[mid] < arr[mid - 1])
		return findMax(arr, low, mid-1);
		
	else
		return findMax(arr, mid + 1, high);
}

int main()
{
	int arr[] = {3, 0, 0, 9, 7, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "The maximum element is " << findMax(arr, 0, n-1);
	return 0;
}


