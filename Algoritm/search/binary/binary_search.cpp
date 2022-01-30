#include <iostream>
using namespace std;

void input_elements(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter namber for index " << i << " : ";
		cin >> arr[i];
	}
}

int binarySearch(int arr[], int el, int low, int high)
{
	if (high >= low)
	{
		int mid = low + (high - low) / 2;

		if (arr[mid] == el)
		{
			return mid;
		}

		if (arr[mid] > el)
		{
			return binarySearch(arr, el, 0, mid - 1);
		}
		if (arr[mid] < el)
		{
			return binarySearch(arr, el, mid + 1, high);
		}
	}
	return -1;
}

int main()
{
	int arr[5];
	int el;
	int size = sizeof(arr) / sizeof(int);
	input_elements(arr, size);
	cout << "What number index should be found?" << endl;
	cin >> el;
	int result = binarySearch(arr, el, 0, size - 1);
	if (result == -1)
		printf("Not found");
	else
		printf("Element is found at index %d", result);
}
