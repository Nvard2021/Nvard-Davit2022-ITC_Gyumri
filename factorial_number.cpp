#include <iostream>

int main() {
	int x;
	int y = 1;
	std::cout << "enter number " << std::endl;
	std::cin >> x;
	for (int b = 1; b <= x; b++){
	y = y * b;
	}
std::cout << "This " << x << " Factorial number: " << y << std::endl;
return 0;
}
