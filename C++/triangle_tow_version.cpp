#include <iostream>

int func_1 (int a, char b, char c);

int main(){
    int a, i, j, k;
		char b, c;
    std::cout << "Enter number: " << std::endl;
		std::cin >> a;
		std::cout << "Enter one symbol: " << std::endl;
		std::cin >> b;
		std::cout << "Enter tow symbol: " << std::endl;
		std::cin >> c;
		func_1(a,b,c);
    return 0;
}

int func_1 (int a, char b, char c){
    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= (a - i); j++){
            std::cout << " ";
        }
    for (int k = 1; k <= i * 2 - 1; k++){
        if (k == 1 || k == i * 2 - 1){
            std::cout << b;
        } else if (i == a){
            std::cout << b;
        } else { 
						std::cout << c;
				}
    }
    std::cout << std::endl;	
		}
		return 0;
}

