#include<iostream>

void print(int arr[], int size){
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
        int arr[] = {8, 7, 10, 30, 5};
        int size = sizeof(arr) / sizeof(arr[0]);
        std::cout << "Array before buble_sorting\n";
        print(arr, size);
        std::cout << "Array after buble_sorting\n";
        bubble_sort(arr, size);
        print(arr, size);
}
