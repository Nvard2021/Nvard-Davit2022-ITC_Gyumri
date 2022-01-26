#include <iostream>

void buble_sorts (int a[]);

int main() {

	int i;
	std::cout << "Enter array lenght number - ";
	std::cin >> i;

	int arr[i];
	std::cout << "Please enter" << " " << i << " " << "number - " << std::endl;
		for(int h = 0; h < i; h++) {
			std::cin >> arr[h];
		}

	buble_sorts(arr);

	std::cout << "Bubble sorting" << std::endl;
		for(int h = 0; h < i; h++) {
			std::cout << arr[h] << std::endl;
		}	
	return 0;
}

void buble_sorts(int a[]) {
	int i;
	for(int h = 0; h < i; h++) {
		for(int k = 0; k < (i-h-1); k++) {
		std::cout << a << std::endl;
			if(a[k] > a[k+1]) {
				int temp = a[k];
				a[k] = a[k+1];
				a[k+1] = temp;
			}
		}	
	}
}
