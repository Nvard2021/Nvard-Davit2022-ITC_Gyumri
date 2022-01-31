#include <iostream>

int binary_search(int arr[], int value, int low, int high);
void print_array (int arr[], int size);

int main() {
        int arr[] = {3, 4, 5, 6, 7, 8, 9};
        int value;
        int size = sizeof(arr) / sizeof(arr[0]);
        std::cout << "Array\n";
        print_array(arr, size);
        std::cout << "\nEnter number from array\n";
        std::cin >> value;
        int result = binary_search(arr, value, 0, size - 1);
        if (result == -1)
                std::cout << "Not found\n";
        else
                std::cout << "Element is found at index \n" << result << std::endl;
}

int binary_search(int arr[], int value, int low, int high) {

        if (high >= low) {
                int mid = low + (high - low) / 2;

        if (arr[mid] == value)
                return mid;

        if (arr[mid] > value)
                return binary_search(arr, value, low, mid - 1);
                return binary_search(arr, value, mid + 1, high);
        }

        return -1;
}

void print_array (int arr[], int size){
        for(int i = 0; i < size; i++){
                std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
}
