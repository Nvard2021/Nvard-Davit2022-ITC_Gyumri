#include <iostream>
  
bool isPrime (int n);

int main(){  
		int n,num=1;
		int count = 0;
		std::cout << "Number: " ;
		std::cin >> n;
    while (true){
			num++;
		if(isPrime (num)){
			count++;
		} 
		if(count == n){
			std::cout << n << "th prime number is " << num << std::endl;
			break;
		}
		}	
}
 
bool isPrime (int n){
	int c = 0;
		for (int a = 2; a < n; a++){
			if (n % a == 0){
				c = 1;
				break;
			}
		}
		if (c == 0){
			return true;
		} else{
			return false;
		}
	}
