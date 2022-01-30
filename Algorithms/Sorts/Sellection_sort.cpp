#include <iostream>

void swap (int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void print_array (int arr[], int size){
	for (int i = 0; i < size; i++){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void sellection_sort (int arr[], int size){
	for (int step = 0; step < size - 1; step++){
		int min_index = step;
		for(int i = step + 1; i < size; i++){
			if (arr[i] < arr[min_index]){
				min_index = i;
			}
		}
	swap(&arr[min_index], &arr[step]);
	}
}

int main(){
	int arr[] = {5, 8, 2, 4, 3, 10, 50, 6};
	int size = sizeof(arr) / sizeof(arr[0]);
	std::cout << "===Array before sorting===\n"; 
	print_array(arr, size);
	sellection_sort(arr, size);
	std::cout << "\n===Array after sorting===\n";
	print_array(arr, size);
}
