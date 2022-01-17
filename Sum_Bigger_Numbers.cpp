#include <iostream>

void name(int a, int b){
        if (a > b){
                std::cout << "a > b" << std::endl;
         }else{
                std::cout << "a < b" << std::endl;
         }
}
	
int main(){
	int a;
	int b;
	std::cout << "Enter value for a: " << std::endl;
	std::cin >> a;
	std::cout << "Enter value for b: " << std::endl;
	std::cin >> b;
	std::cout << "Values" << std::endl << "a = " << a << std::endl << "b = " << b << std::endl; 
	name(a, b);
	int c = a + b;
        std::cout << "a + b = " << c << std::endl;

	}

