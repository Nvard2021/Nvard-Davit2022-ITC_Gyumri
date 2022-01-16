#include <iostream>

using namespace std;

template <typename T>
T* UpperStr(T[]);
int strlen(char *);

int main(){
  char str[8] = "hello";
  int size = strlen(str);

  char *arr = UpperStr(str);
  for(int i = 0;i < size; i++){
     cout << arr[i];
  }
  cout <<"\n";
}

int strlen(char* str){
   int length = 0;
   while(str[length] != '\0'){
       ++length;
   }
   return length;
}

template <typename T>
T* UpperStr(T str[]){
  int length = strlen(str); 
  for(int i = 0; i< length;i++){
  if(str[i] >= 'a' && str[i] <= 'z'){
      str[i] = str[i] - 32; 
  }
 }  
  return str;
}
