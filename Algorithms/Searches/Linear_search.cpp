#include <iostream>

void print_array (int arr[], int size){
        for(int i = 0; i < size; i++){
                std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
}

void linear_search (int arr[], int size, int x){
        for(int i = 0; i < size; i++){
                if (arr[i] == x){
                        std::cout << "\nNumber: " << x << "\nIndex of number: " << i << "\n";
                }
        }
}

int main() {
        int arr[] = {5, 3, 6, 1, 4, 2, 3, 10};
        int size = sizeof(arr) / sizeof(arr[0]);
        int x;
        std::cout << "Array\n";
        print_array(arr, size);
        std::cout << "\nEnter number from array\n";
        std::cin >> x;
        linear_search(arr, size, x);
}

