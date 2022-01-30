#include <iostream>
using namespace std;
void input_elements(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter namber for "
			 << "index " << i << " : ";
		cin >> arr[i];
	}
}
void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "index " << i << " : " << arr[i] << endl;
	}
}
int shellsort(int arr[], int size)
{
	for (int interval = size / 2; interval > 0; interval /= 2)
	{
		for (int i = interval; i < size; i++)
		{
			int temp = arr[i];
			int gap;
			for (gap = i; gap >= interval && arr[gap - interval] > temp; gap -= interval)
			{
				arr[gap] = arr[gap - interval];
				for (int i = 0; i < size; i++)
				{
					cout << "sort" << endl;
					cout << "index " << i << " : " << arr[i] << endl;
				}
			}
			arr[gap] = temp;
		}
	}
	return 0;
}
int main()
{
	int arr[9];
	int size = sizeof(arr) / sizeof(int);
	input_elements(arr, size);
	printArray(arr, size);
	cout << "Shell Sorting" << endl;
	shellsort(arr, size);
	printArray(arr, size);
}
