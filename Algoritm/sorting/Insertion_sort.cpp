#include <iostream>

void print_array (int arr[], int size);
void insertion_sort (int arr[], int size);

int main(){
	int arr[] = {5, 6, 2, 3, 1, 4, 8, 10};
	int size = sizeof(arr) / sizeof(arr[0]);
	std::cout  << "===Array before sorting===\n";
	print_array(arr, size);
	std::cout  << "===Array after sorting===\n";
	insertion_sort(arr, size);
	print_array(arr, size);
	 
}

void print_array (int arr[], int size){
	for (int i = 0; i < size; i++){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void insertion_sort (int arr[], int size){
	for(int step = 1; step < size; step++) {
		int key = arr[step];
		int j = step - 1;

		while(key < arr[j] && j >= 0){
			arr[j +1] = arr[j];
			--j;
		}	
	arr[j + 1] = key;
	}	
}
