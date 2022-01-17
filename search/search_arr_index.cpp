#include <iostream>

int func(int arr[], int i, int number, int index);

int main(){
        int arr[5];
        int i;
        int number;
        int index;
        std::cout << "Enter 5 Numbers for array: " << std::endl;
        func(arr,i,number,index);
        return 0;
}

int func (int arr[], int i, int number, int index) {
        for(i = 0; i < 5; i++)
                std::cin >> arr[i];
                std::cout << std::endl << "Enter a number to search from array: ";
                std::cin >> number;

        for (i = 0; i < 5; i++) {
                if(arr[i] == number) {
                        index = i;
                        break;
                }
        }
        std::cout << "Index = " << index << std::endl;
}
