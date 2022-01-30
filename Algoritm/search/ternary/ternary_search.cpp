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

int ternary_search(int arr[], int key, int low, int high)
{
	if (high >= low)
	{
		int mid1 = low + (high - low) / 3;
		int mid2 = high - (high - low) / 3;

		if (arr[mid1] == key)
		{
			return mid1;
		}
		if (arr[mid2] == key)
		{
			return mid2;
		}

		if (arr[mid1] > key)
		{
			return ternary_search(arr, key, low, mid1 - 1);
		}
		else if (arr[mid2] < key)
		{
			return ternary_search(arr, key, mid2 + 1, high);
		}
		else
		{

			return ternary_search(arr, key, mid1 + 1, mid2 - 1);
		}
	}
	return -1;
}

int main()
{
	int arr[5];
	int key;
	int size = sizeof(arr) / sizeof(int);
	input_elements(arr, size);
	cout << "What number index should be found?" << endl;
	cin >> key;
	int result = ternary_search(arr, key, 0, size - 1);
	if (result == -1)
	{
		cout << "Not found" << endl;
		;
	}
	else
	{
		cout << "Element is found at index " << result << endl;
	}
}
