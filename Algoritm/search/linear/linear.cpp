#include <iostream>

int input_elements(int arr[], int number, int index);

int main()
{
    int arr[5];
    int number;
    int index;
    std::cout << "Enter 5 Numbers for array: " << std::endl;
    int result = input_elements(arr, number, index);
    if (result == -1)
    {
        std::cout << "Not Found" << std::endl;
    }
    else
    {
        std::cout << "Index = " << result << std::endl;
    }
    return 0;
}

int input_elements(int arr[], int number, int index)
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter number for " << i + 1 << " : ";
        std::cin >> arr[i];
    }
    std::cout << "Enter a number to search from array: ";
    std::cin >> number;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == number)
        {
            index = i;
            return index;
            break;
        }
    }
    return -1;
}
