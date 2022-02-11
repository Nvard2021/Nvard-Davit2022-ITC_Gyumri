#include <iostream>
using namespace std;
int divide(int number, int x);

int isUgly(int number)
{
    number = divide(number, 2);
    number = divide(number, 3);
    number = divide(number, 5);
    if (number == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int divide(int number, int x)
{
    while (number % x == 0){
    
        number = number / x;
    }
    return number;
}
int print(int number){
    int i = 1;

    int count = 1;

    while (number > count)
    {
        i++;
        if (isUgly(i)){
            count++;
        }
    }
    return i;
}

int main()
{
    unsigned number = print(8);

    cout << "8th ugly number is " << number << endl;
    return 0;

}
