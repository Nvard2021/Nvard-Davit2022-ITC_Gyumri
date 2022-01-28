#include <iostream>

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[], int low, int high) {
	int privot = arr[high];
	int i = (low - 1);

	for (int j = low; j < high; j++){
		if (arr[j] <= privot) {
			i++;
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return 0;
}

void quick_sort(int arr[], int low, int high){
	if(low < high) {
		int pf = partition(arr, low, high);
		quick_sort(arr, low, pf - 1);
		quick_sort(arr, high, pf + 1);
	}
}

void print_array(int arr[], int size) {
	for (int i = 0; i < size; i++){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int main(){
	int arr[] = {8, 4, 2, 5, 1, 10, 9, 3};
	int size = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Array before sorting: " << std::endl;
	print_array(arr, size);

	quick_sort(arr, 0, size - 1);

	std::cout << "Array after sorting: " << std::endl;
	print_array(arr, size);
	return 0;
}
