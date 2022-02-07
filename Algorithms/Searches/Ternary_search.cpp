#include <bits/stdc++.h>
using namespace std;

int ternary_search(int left, int right, int key, int arr[]) {
	if (right >= left) {
		int mid1 = left + (right - left) / 3;
		int mid2 = right - (right - left) / 3;

		if (arr[mid1] == key) {
			return mid1;
		}

		if (arr[mid2] == key) {
			return mid2;
		}

		if (key < arr[mid1]) {
			return ternary_search(left, mid1 - 1, key, arr);
		}
		else if (key > arr[mid2]) {
			return ternary_search(mid2 + 1, right, key, arr);
		}
		else {
			return ternary_search(mid1 + 1, mid2 - 1, key, arr);
		}
	}
	return -1;
}

int main(){
	int left;
	int right; 
	int p;
	int key;

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);	
	std::cout << "===Array===" << std::endl;

	for(int i = 0; i < size; i++){
		std::cout << arr[i] << " ";
	}

	left = 0;
	right = 9;
	key = 5;
	p = ternary_search(left, right, key, arr);
	cout << "\nNumber:  " << key << std::endl;
	std::cout << "Index: " << p << endl;
}

