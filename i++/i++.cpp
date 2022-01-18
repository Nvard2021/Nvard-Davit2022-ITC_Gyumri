#include <iostream>
using namespace std;
int main(){
    int number;
    int number1;
    cout << "Enter number" << endl;
    cin >> number;
    number1 = number;
    int number2 = number;
    int number3 = number;
    cout << "Number++ = " << number++ << endl;
    cout << "++Number = " << ++number1 << endl;
    cout << "***********\nNumber-- = " << number2-- << endl;
    cout << "--Number = " << --number3 << endl;
}
