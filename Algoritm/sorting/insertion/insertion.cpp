#include <iostream>
using namespace std;
void insertionSort(int arr[], int size)
{
    int key;
    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
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
int main()
{
    int arr[5];
    int size = sizeof(arr) / sizeof(int);
    input_elements(arr, size);
    printArray(arr, size);
    insertionSort(arr, size);
    cout << "insertion sort" << endl;
    printArray(arr, size);
}
