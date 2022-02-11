#include <iostream>
using namespace std;
 
int maxDivide(int number1, int number2)
{
    while (number1 % number2 == 0)
        number1 = number1 / number2;
         
    return number1;
}
 
int isUgly(int number)
{
    number = maxDivide(number, 2);
    number = maxDivide(number, 3);
    number = maxDivide(number, 5);
 
    return (number == 1) ? 1 : 0;
}
 
int getNthUglyNo(int number)
{
    int i = 1;
     
    int count = 1;
 

    while (number > count)
    {
        i++;
        if (isUgly(i))
            count++;
    }
    return i;
}
 
int main()
{
     
    unsigned number = getNthUglyNo(10);
    cout << "10th ugly no. is " << number << endl;
    return 0;
}
