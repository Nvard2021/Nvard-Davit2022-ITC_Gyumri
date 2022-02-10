// Bubble sorting algorithm

#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {

  for (int i = 0; i < size; ++i) {
      
    for (int j = 0; j < size - i; ++j) {

      if (array[j] > array[j + 1]) {

        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

void printArray(int array[], int size) {
  for (int j = 0; j < size; ++j) {
    cout << "  " << array[j];
  }
  cout << "\n";
}

int main() {
  int data[] = {-32, 21, 3, 16, -4};
  
  int size = sizeof(data) / sizeof(data[0]);
  
  bubbleSort(data, size);
  
  cout << "Sorted Array:\n";  
  printArray(data, size);
}
