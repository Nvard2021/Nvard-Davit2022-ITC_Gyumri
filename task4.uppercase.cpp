// Convert string to Uppercase

#include <iostream>
#include <cstring>
 
 
using namespace std;
 
int main()
{
    char arr[] = "hello world";
 
    cout << "Input:\n"<< arr<< endl;
    cout<<"Output:\n";
    for (int x=0; x<strlen(arr); x++)
        putchar(toupper(arr[x]));
     
    return 0;
}
