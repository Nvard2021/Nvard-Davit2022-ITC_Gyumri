//Replace

#include <iostream>
#include <algorithm>
#include <string>
 
int main()
{
    std::string s = "C**";
    const char x = '*';
    const char y = '+';
 
    std::replace(s.begin(), s.end(), x, y);
    std::cout << s;
 
    return 0;
}
