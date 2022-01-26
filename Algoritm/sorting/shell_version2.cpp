#include <iostream>

void shell_sort(int array[], int n);
void print(int array[], int size);

int main() {
	int lenght;
	std::cout << "Input array lenght ";
	std::cin >> lenght;
  int data[lenght];
	std::cout << "Input " << lenght  << " array data " << std::endl;
	for (int l = 0; l < lenght; l++){
		std::cin >> data[l];
	}
  int size = sizeof(data) / sizeof(data[0]);
  shell_sort(data, size);
  std::cout << "Sorted array: \n";
  print(data, size);
}

void shell_sort(int array[], int n) {
  for (int interval = n / 2; interval > 0; interval = interval / 2) {
    for (int i = interval; i < n; i++) {
      int temp = array[i];
      int j;
      for (j = i; j >= interval && array[j - interval] > temp; j = j - interval) {
        array[j] = array[j - interval];
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
