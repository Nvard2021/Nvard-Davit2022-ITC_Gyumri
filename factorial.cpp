#include <iostream>
using namespace std;

template<typename T>
T factorial(T);

int main() {
    int n, result;

    cout << "Enter a number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " is " << result << "\n";
    return 0;
}

template<typename T>
T factorial(T n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}

