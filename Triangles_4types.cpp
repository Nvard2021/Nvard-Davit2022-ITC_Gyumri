#include <iostream>

void print_a (int a, char a2){
	for (int z = 1; z <= a; z++){
		for (int x = 1; x <= z; x++){
			std::cout << a2 ;
		}
        	std::cout << std::endl;
	}
}

void print_b (int b, char b2) {
	for (int g = b; g >= 1; g--){
		for (int h = g; h > 0; h--) {
			std::cout << b2;
		}
		std::cout << std::endl;
	}
}

void print_c (int c, char c2){
	for (int w = 1; w <= c; w++){
		for (int q = c-w; q > 0; q--) {
			std::cout << " ";
		}
		for (int e = 1; e <= w; e++) {
			std::cout << c2;
		}
		std::cout << std::endl;
	}
}

void print_e (int e, char e2){
    for (int n = e; n >= 1; n--) {
        for (int m = e - n; m > 0; m--) {
            std::cout << " ";
        }
        for (int v = n; v > 0; v--) {
            std::cout << e2;
        }
        std::cout << std::endl;
    }
}


int main () {
	int a1;
	int b1;
	int c1;
	int e1;
	char a2;
	char b2;
	char c2;
	char e2;
	std::cout << "aEnter number: " << std::endl;
	std::cin >> a1;
	std::cout << "Enter symbol: " << std::endl;
	std::cin >> a2;
	print_a(a1, a2);
	std::cout << "bEnter number: " << std::endl;
	std::cin >> b1;
	std::cout << "Enter symbol: " << std::endl;
        std::cin >> b2;
        print_b(b1, b2);
	std::cout << "cEnter number: " << std::endl;
	std::cin >> c1;
	std::cout << "Enter symbol: " << std::endl;
	std::cin >> c2;
	print_c(c1, c2);
        std::cout << "eEnter number: " << std::endl;
        std::cin >> e1;
        std::cout << "Enter symbol: " << std::endl;
        std::cin >> e2;
        print_e(e1, e2); 
}

