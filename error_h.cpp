#include <iostream>

int add(int a, int b);
int add_wrapper(int a, int b);

int main(){
	int a;
	std::cout << "Input a number ";
	std::cin >> a;
	int b;
	std::cout << "Input b number "; 
	std::cin >> b;
	try {
	std::cout << "Your number " << add_wrapper(a,b) << std::endl;
	} catch (std::invalid_argument& err){
		std::cout << "Faild\n" << err.what() << std::endl;
	}

}

int add(int a, int b){
	
	if (a > 100 || b > 100){
		//return -1;
		throw std::invalid_argument ("===ERROR=== (a < 100) ");
	} else if (a < 0 || b < 0){
		//return -2;
		throw std::invalid_argument ("===ERROR=== (a < 0) ");
	} else {
		return a + b;

	}
}

int add_wrapper(int a, int b){
	return add(a,b);
}

/*int main(){
...
int result = add_wrapper(a,b);
	if (c == 1){
		std::cout << "===ERROR=== (a < 100) " << std::endl;
	} else if (c == 2){
		std::cout << "===ERROR=== (a > 0) " << std::endl;
	} else {
		std::cout << "Your number " << add_wrapper(a,b) << std::endl;
	}
}*/

/*int add(int a, int b){
		if (a <= 100 && b <= 100){
			return a + b;
		} else {
			return -1;
		} 
	}*/

