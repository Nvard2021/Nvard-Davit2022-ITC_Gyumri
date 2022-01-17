#include <iostream>

int main() {
   int n;
   int fact = 1;
   std::cout << "Write a number to calculate the factorial of the number" << std::endl;
   std::cin >> n;
   for(int i=1; i<=n; i++){
   fact = fact * i;
   }
   std::cout<<"Factorial of "<< n <<" is "<< fact << std::endl;
   return 0;

}
