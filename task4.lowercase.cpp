//Convert String to Lowercase

#include <iostream>
#include <cstring>
 
 
using namespace std;
 
int main()
{
    char arr[] = "HELLO WORLD.";
 
    cout << "Input:\n"<< arr<< endl;
    cout << "Output:\n";
    for (int x=0; x<strlen(arr); x++)
        putchar(tolower(arr[x]));
     
    return 0;
}
