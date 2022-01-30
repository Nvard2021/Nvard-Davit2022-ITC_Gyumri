#include <iostream>

void print_array (int arr[], int size){
        for(int i = 0; i < size; i++){
                std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
}

void bubble_sort (int arr[], int size){
        for(int i = 0; i < size; i++){
                for(int j = 0; j < (size - i - 1); j++){
                        if(arr[j] > arr[j + 1]){
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                        }
                }
        }
}

int main() {
        int arr[] = {5, 6, 1, 4, 2, 3, 10};
        int size = sizeof(arr) / sizeof(arr[0]);
        std::cout << "Array before sorting\n";
        print_array(arr, size);
        std::cout << "Array after sorting\n";
        bubble_sort(arr, size);
        print_array(arr, size);
}


