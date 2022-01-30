#include <iostream>

void print_array(int arr[], int size) {
	for (int i = 0; i < size; i++){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void shell_sort (int arr[], int size){
	int gap = size / 2;
	
	while(gap > 0) {
		for(int i = gap; i < size; i++) {
			int temp = arr[i];
			int j = i;
			while(j >= gap && arr[j - gap] > temp){
				arr[j] = arr[j - gap];
				j = j - gap;
			}
		arr[j] = temp;
		}
	gap = gap / 2;
	}
}

int main () {
	int arr[] = {10, 2, 3, 5, 9, 8, 4, 7};
	int size = sizeof(arr) / sizeof(arr[0]);
	std::cout << "Array before sorting: " << std::endl;
	print_array(arr, size);

	std::cout << "Array after sorting: " << std::endl;
	shell_sort(arr, size);
	print_array(arr, size);
	return 0;
}
