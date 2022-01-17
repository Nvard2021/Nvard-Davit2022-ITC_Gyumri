#include <iostream>

int main() {
	int a;
	int b = 1;
	std::cout << "Write a number and the factorial of that number will be counted։ " << std::endl;
	std::cin >> a;
	
	for (int i = 1; i <= a; i++){
		b = b * i;
	}
	std::cout << "Input number = " << a << std::endl;
	std::cout << "Factorial = " << b << std::endl;
	return 0;
}
