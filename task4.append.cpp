//Append the string

#include <iostream>
#include <string>
 
int main()
{
    std::string s = "C+";
    char ch = '+';
 
    s.append(1, ch);
    std::cout << s;
 
    return 0;
}
