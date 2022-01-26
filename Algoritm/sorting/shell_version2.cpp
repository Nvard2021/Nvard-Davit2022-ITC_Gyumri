#include <iostream>

void shell_sort(int array[], int lenght);
void print(int array[], int size);

int main() {
	int lenght;
	std::cout << "Input array lenght ";
	std::cin >> lenght;
  int arr[lenght];
	std::cout << "Input " << lenght  << " array data " << std::endl;
	for (int l = 0; l < lenght; l++){
		std::cin >> arr[l];
	}
  int size = sizeof(arr) / sizeof(arr[0]);
  shell_sort(arr, size);
  std::cout << "Sorted array: \n";
  print(arr, size);
}

void shell_sort(int array[], int lenght) {
  for (int gap = lenght / 2; gap > 0; gap = gap / 2) {
    for (int i = gap; i < lenght; i++) {
      int temp = array[i];
      int j;
      for (j = i; j >= gap && array[j - gap] > temp; j = j - gap) {
        array[j] = array[j - gap];
      }
      array[j] = temp;
    }
  }
}

void print(int array[], int size) {
  int i;
  for (i = 0; i < size; i++){
    std::cout << array[i] << " ";
  	std::cout << std::endl;
	}	
}
