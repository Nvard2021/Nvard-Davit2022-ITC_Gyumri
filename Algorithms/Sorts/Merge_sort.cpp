#include <iostream>
using namespace std;

void merge(int arr[], int left_first_el, int right_first_el, int size_arr){
	int left_node = right_first_el - left_first_el + 1;
	int right_node = size_arr - right_first_el;

	int left[left_node], right[right_node];

	for (int i = 0; i < left_node; i++)
		left[i] = arr[left_first_el + i];	

	for (int j = 0; j < right_node; j++)
		right[j] = arr[right_first_el + 1 + j];
	
	int i, j, arr_index;
		i = 0;
		j = 0;
		arr_index = left_first_el;

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

void print_array(int arr[], int size) {
	for (int i = 0; i < size; i++)
	std::cout << arr[i] << " ";
	std::cout << std::endl;
}

int main () {
	int arr[] = {6, 9, 84, 7, 55, 10};
	int size = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Array: " << std::endl;
	for(int i = 0; i < size; i++){
		std::cout << arr[i] << " ";
	}	
	std::cout << std::endl;
	merge_sort(arr, 0, size - 1);
	
	std::cout << "Sorted array: \n";
	print_array(arr, size);
	return 0;
}
