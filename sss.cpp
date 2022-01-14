#include <iostream>




		template <class T>
		T min(T number1, T number2)
		{

		return (number1 < number2) ? number1 : number2;
		}

		template <class T>
		T max(T number1, T number2)
		{

		return (number1 > number2) ? number1 : number2;
		}


		int main()
{

		int num1 = 5;
		int num2 = 8;

		std::cout << "Minimum of 5, 8 is:  ";
		std::cout << min<int>(num1, num2) <<std:: endl;

		std::cout << "Maximum of 5, 8 is:  ";
		std::cout << max<int>(num1, num2) <<std::endl;

		double num3 = 1.1;
		double num4 = 5.5;
		
		std::cout << "Minimum of 1.1, 5.5 is:  ";
		std::cout << min<double>(num3, num4) <<std::endl;

		std::cout << "Maximum of 1.1, 5.5 is:  ";
		std::cout << max<double>(num3, num4) <<std::endl;


		return 0;
}
		
