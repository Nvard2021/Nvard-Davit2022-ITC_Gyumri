#include <iostream>
#include <string>

int strlen(char *str);
int low_to_upp(int i, char *s);

int main(){
   char s[10];
   int i;
   std::cout << "Lowercase: ";
   std::cin >> s;
   low_to_upp(i, s);
   std::cout << "Uppercase: " << s << std::endl;
}

int low_to_upp(int i, char *s){
   for(i = 0; i <= strlen(s); i++) {
      if(s[i] >= 97 && s[i] <= 122){
                s[i] = s[i] - 32;
      }
   }
   return 0;
}  

int strlen(char *str){
    int length = 0;
    while (str[length] != '\0') {
        ++length;
    }
    return length;
}
