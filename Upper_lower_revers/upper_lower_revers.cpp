#include <iostream>
#include <string>
using namespace std;

int strlen(char *str);
char* strrevers(char *str);
char* strupper(char *str);
char* strlower(char *str);

int main(){
    char name[8];
    std::cout << "What is your name? " << endl;
    cin >> name;
    char str[8] = "Hello";
    char *str1 = name;
    std::cout << str << " " << str1 << std::endl;
    //std::cout << "Len = "<< strlen(str1) << std::endl;
    char str3[5];
    char str4[5];
    int cuation;
    std::cout << "Enter word for revers" << std::endl;
    cin >> str3;
    std::cout <<"last: " << str3 << endl;
    std::cout <<"New: " << strrevers(str3) << std::endl;
    std::cout << "Enter word" << endl;
    cin >> str4;
    std::cout << "is upper(0) or is lower(1) " << std::endl;
    cin >> cuation;
    if(cuation == 0){
    std::cout <<"Last: " << str4 << endl;
    std::cout << "New: " << strupper(str4) << endl; 
    }else if (cuation == 1){
    std::cout <<"Last: " << str4 << endl;
    std::cout << "New: " << strlower(str4) << endl; 
    }else{
        std::cout << "Enter 1 or 0" << endl;
    }
}

int strlen(char *str){
    int length = 0;
    while (str[length] != '\0') {
        ++length;
    }
    return length;
}
char* strrevers(char *str){
    int length = strlen(str);
    for (int i = 0; i < length/2 ;++i){
      char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    return str;
}

char* strupper(char *str){
    int length = strlen(str);
    for(int i=0; i<length; ++i){
    if(str[i] > 65 && str[i] < 90){
    continue;
    }else{
    str[i] = str[i]- 32;
        }
    }
    return str;
}

char* strlower(char *str){
    int length = strlen(str);
    for(int i=0; i<length; ++i){
    if(str[i] > 'A' && str[i] < 'Z'){
    str[i] = str[i] + 32;
        }
    }
    return str;
}

