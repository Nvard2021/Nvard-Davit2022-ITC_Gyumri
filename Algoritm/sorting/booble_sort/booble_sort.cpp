#include <iostream>

void swap(int &arr, int &arr2)
{
        int temp = arr;
        arr = arr2;
        arr2 = temp;
}

void bubble_sort(int a[])
{
        bool ok;
        for (int i = 0; i < 5; i++)
        {
                ok = false;
                for (int j = 0; j < (5 - i - 1); j++)
                {
                        if (a[j] > a[j + 1])
                        {

                                swap(a[j], a[j + 1]);
                                ok = true;
                        }
                }
                if (ok == false)
                {
                        break;
                }
        }
}

int main()
{
        int arr[5];
        std::cout << "Enter 5 numbers for array: " << std::endl;
        for (int i = 0; i < 5; i++)
        {
                std::cin >> arr[i];
        }

        bubble_sort(arr);

        std::cout << "Bubble sorting" << std::endl;
        for (int i = 0; i < 5; i++)
        {
                std::cout << arr[i] << " " << std::endl;
        }
        return 0;
}
