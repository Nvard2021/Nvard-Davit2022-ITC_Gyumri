#include <iostream>
#include <string>
using namespace std;


int add(int a, int b){
    
    if (a > 100 || b > 100)
    {
        throw invalid_argument("you wrote a number greater than 100");
    } else if (a < 0 || b < 0) {
        throw invalid_argument("you must enter a number greater than 0");
    }
    return a+b;
}
int add_wrapper(int a, int b)
{
    return add(a,b);
}

int main(){
    int a;
    int b;
    std::cout << "Enter number for a" << endl;
    cin >> a;
    std::cout << "Enter number for b" << endl;
    cin >> b;
    try {
        int result = add_wrapper(a,b);
        cout << "summmer = " << result << endl;
    }   
    catch (invalid_argument& err)
    {
        cout << "Faild\n" << err.what() << endl;
    }
}
