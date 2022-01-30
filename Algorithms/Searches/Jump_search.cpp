#include <iostream>
#include<cmath>

int jump_search(int arr[], int input_number, int size){
        int step = sqrt(size);
        int i = 0;

        while (arr[std::min(step, size)-1] < input_number){
                i = step;
                step += sqrt(size);

                if (i >= size)
                        return -1;
        }

        while (arr[i] < input_number){
                i++;
                if (i == std::min(step, size))
                        return -1;
        }

        if (arr[i] == input_number)
                return i;

        return -1;
}

void print_array (int arr[], int size){
        for(int i = 0; i < size; i++){
                std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
}

int main() {
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int input_number;
        int size = sizeof(arr) / sizeof(arr[0]);
        std::cout << "Array\n";
        print_array(arr, size);
        std::cout << "\nEnter number from array\n";
        std::cin >> input_number;
	int index = jump_search(arr, input_number, size);
	std::cout << "\nNumber: " << input_number << "\nIndex: " << index << std::endl;
	return 0;
}



