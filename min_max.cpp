#include <iostream>

int func_arr(int arr[5]);
int min_arr(int arr[5], int size);
int max_arr(int arr[5], int size);

int main() {
	int size = 0;
	int arr[5];
	std::cout << "Enter 5 number for array " << std::endl;
	size = func_arr(arr);
	int max = max_arr(arr, size);
	std::cout << "Max number " << max << std::endl;
	int min = min_arr(arr, size);
	std::cout << "Min number " << min << std::endl;
	return 0;
}

int func_arr(int arr[5]){
int size = 0;
	for (int h = 0; h < 5; h++){
		std::cin >> arr[h];
		++size;
	}
	return size;
}

int min_arr(int arr[5], int size){
	int min = arr[0];
		for(int i = 0; i < size; i++){
			if (min > arr[i]){
				min = arr[i];
			}
		}
		return min;
}

int max_arr(int arr[5], int size){
	int max = arr[0];
		for(int k = 0; k < size; k++){
			if (max < arr[k]){
				max = arr[k];
			}
		} 
		return max;
}
