#include <iostream>

int strLength(char[]);
char *strReplace(char[],char,char,bool);

int main(){
  char str[8] = "hello";
  char old;
  char newr;
  bool replaceAll;
  std::cout << "Please enter old letter: ";
  std::cin >> old;
  std::cout << "Please enter new letter: ";
  std::cin >> newr;
  std::cout << "Please enter bool value: ";
  std::cin >> replaceAll;
  std::cout << strReplace(str,old,newr,replaceAll) <<"\n";
}

int strLength(char str[]){
   int len = 0;
   while(str[len] != '\0'){
     ++len;
   }
  return len;
}

char *strReplace(char str[],char old,char newr,bool replaceAll){
    int length = strLength(str);
    for(int i=0;i<length;i++){
    if(replaceAll){
      if(str[i] == old){
          str[i] = newr;
      }
    } else {
       if(str[i] == old){
          str[i] = newr;
          if(true){
            break;
          }
       }
    }
  }
  return str;
}
