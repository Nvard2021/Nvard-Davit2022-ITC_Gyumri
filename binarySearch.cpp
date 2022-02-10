#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;
}

int main() {
  int myarr[5];
  int num;
  int result;

  cout << "Enter 5 elements" << endl;
  for (int i = 0; i < 5; i++) {
    cin >> myarr[i];
  }
  cout << "Enter an element to search" << endl;
  cin >> num;

  result = binarySearch(myarr, 0, 9, num);

  if (result == -1) {
    cout << "Number Not Found" << endl;
  } else {
    cout << "Number found at position: " << result << endl;
  }

  return 0;
}
