#include <iostream>

void shell_sort();
void print_shell_sort(int arr[8]);

int main (){
	int arr[8] = {35,33,42,10,14,19,27,44};
	std::cout << "Old Array " << std::endl;
		for (int a = 0; a < 8; a++){
			std::cout << " " << arr[a]; 
		}
		std::cout << std::endl;
	//	shell_sort(gap);
		print_shell_sort(arr);
}

void shell_sort(){
	int arr[8];
	int n = sizeof(arr) / sizeof(arr[0]);
	int gap = n/2;
		while (gap >= 1){
			int arr[8];
			int left_index = 0;
			int right_index = gap;

		for (int l = gap; left_index < l; left_index++){
			while (arr[left_index] > arr[right_index]){
				int temp = arr [left_index];
				arr[left_index] = arr[right_index];
				arr[right_index] = temp;
			}
			gap = gap / 2;
		}
	}
}

void print_shell_sort(int arr[8]){
	shell_sort();
	for (int j = 0; j < 8; j++){
		std::cout << " " << arr[j];
	}
	std::cout << std::endl;
}
