#include <iostream>

using namespace std;

int strlen(char *);
char *LowerStr(char *);

int main(){
  char str[8] = "HELLO";
  cout << LowerStr(str) <<"\n";
}

int strlen(char* str){
   int length = 0;
   while(str[length] != '\0'){
       ++length;
   }
   return length;
}

char *LowerStr(char* str){
  int length = strlen(str); 
  for(int i = 0; i< length;i++){
  if(str[i] >='A' && str[i] <= 'Z'){
      str[i] = str[i] + 32; 
  }
 }  
  return str;
}
