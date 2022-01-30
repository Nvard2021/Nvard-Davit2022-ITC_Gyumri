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

int exponentially_search(int arr[], int size, int key)
{
    if (arr[0] == key)
    {
        return 0;
    }
    int i = 1;
    while (arr[i] <= key)
    {
        i *= 2;
        return binarySearch(arr, key, i / 2, size - 1);
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
    int result = exponentially_search(arr, size, key);
    if (result == -1)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Element is found at index " << result << endl;
    }
}
