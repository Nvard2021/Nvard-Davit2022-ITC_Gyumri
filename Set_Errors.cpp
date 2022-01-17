#include <iostream>

int add(int a, int b){
	if(a > 100 || b > 100){
		throw std::invalid_argument("===Error===\nYou can't write great number from 100");
	} else if (a < 0 || b < 0){
		throw std::invalid_argument("===Error===\nYou can't write low number from 0");
	} 
	return a + b;
}

int add_wrapper(int a, int b){
	return add(a,b);	
}

int main(){
	int a;
	int b;
	std::cout << "Enter numbers for a and b: " << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	try {
		int result = add_wrapper(a,b);
		std::cout << "\nSuccess = " << result << std::endl;
	}

	catch (std::invalid_argument& err){
		std::cout << "\nFailed\n" << err.what() << std::endl;
	}
}
