#include <iostream>

void bubble_sort(int a[]);

int main() {
        int arr[5];
        std::cout << "Enter 5 numbers for array: "<< std::endl;
        for(int i=0;i<5;i++) {
                std::cin >> arr[i];
        }

        bubble_sort(arr);

        std::cout << "Bubble sorting" << std::endl;
        for(int i=0;i<5;i++) {
                std::cout << arr[i] << " " << std::endl;
        }
        return 0;
}

void bubble_sort(int a[]) {
    for(int i=0;i<5;i++) {
        for(int j=0;j<(5-i-1);j++) {
            if(a[j]>a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
