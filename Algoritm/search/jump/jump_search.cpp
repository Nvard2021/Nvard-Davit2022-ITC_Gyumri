#include <iostream>
#include <math.h>

using namespace std;

void input_elements(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter namber for index " << i << " : ";
        cin >> arr[i];
    }
}

int jump_search(int arr[], int size, int key)
{
    int prev = 0;
    int m = sqrt(size);
    while (arr[m] <= key)
    {

        prev = m;
        m += sqrt(size);
        cout << "ok" << endl;
        if (m > size - 1)
            return -1;
    }
    for (int i = prev; i < m; i++)
    {
        cout << "man gukam" << endl;
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{

    int arr[10];
    int key;
    int size = sizeof(arr) / sizeof(int);
    input_elements(arr, size);
    cout << "What number index should be found?" << endl;
    cin >> key;
    int result = jump_search(arr, size, key);
    if (result == -1)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Element is found at index " << result << endl;
    }
}
