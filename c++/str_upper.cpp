#include <iostream>

using namespace std;

int strlen(char *);
char *UpperStr(char *);

int main(){
  char str[8] = "hello";
  cout << UpperStr(str) <<"\n";
}

int strlen(char* str){
   int length = 0;
   while(str[length] != '\0'){
       ++length;
   }
   return length;
}


char *UpperStr(char* str){
  int length = strlen(str); 
  for(int i = 0; i< length;i++){
  if(str[i] >= 'a' && str[i] <= 'z'){
      str[i] = str[i] - 32; 
  }
 }  
  return str;
}
