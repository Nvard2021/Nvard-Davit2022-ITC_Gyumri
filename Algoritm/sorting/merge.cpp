#include <iostream>
//using namespace std;

void merge(int arr[], int left_el, int right_el, int size_arr);
void merge_sort(int arr[], int lt, int rt);
void printArray(int A[], int size);

int main() {
	int k;
	std::cout << "Enter your array ";
	std::cin >> k;
	int arr[k] = {};
	std::cout << "Input " << k << " size array" << std::endl;
		for (int h = 0; h < k; h++){
			std::cin >> arr[h];
		}	
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Input array is " << std::endl;
	printArray(arr, arr_size);

	merge_sort(arr, 0, arr_size - 1);

	std::cout << std::endl;
	std::cout << "Sorted array is " << std::endl;
	printArray(arr, arr_size);
	std::cout << std::endl;
	return 0;
}

void merge(int arr[], int left_el, int right_el, int size_arr){
	int left_node = right_el - left_el + 1;
	int right_node = size_arr - right_el;

	int left[left_node], right[right_node];

	for (int i = 0; i < left_node; i++){
		left[i] = arr[left_el + i];	
	}
	for (int j = 0; j < right_node; j++){
		right[j] = arr[right_el + 1 + j];
	}
	int i, j, arr_index;
		i = 0;
		j = 0;
		arr_index = left_el;

	while(i < left_node && j < right_node){
		if (left[i] <= right[j]){
			arr[arr_index] = left[i];
			i++; 
		} else {
			arr[arr_index] = right[j];
			j++; 
		}
		arr_index++;
	}

	while (i < left_node){
		arr[arr_index] = left[i];
		i++;
		arr_index++;
	}

	while (j < right_node){
		arr[arr_index] = right[j];
		j++;
		arr_index++;
	}
}

void merge_sort(int arr[], int lt, int rt) {
	if (lt < rt){
		int middle = lt + (rt - lt) / 2;
		
		merge_sort(arr, lt, middle);
		merge_sort(arr, middle + 1, rt);

		merge(arr, lt, middle, rt);
	}
}

void printArray(int A[], int size) {
	for (int i = 0; i < size; i++)
		std::cout << A[i] << " ";
}
