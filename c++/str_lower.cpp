#include <iostream>

using namespace std;

template <typename T>
T* LowerStr(T[]);
int strLen(char[]);

int main(){
  char str[8] = "HELLO";
  int size = strLen(str);
  char *arr = LowerStr(str);
  for(int i = 0;i < size;i++){
       cout << arr[i];
  }
  cout <<"\n";
}

int strLen(char str[]){
   int length = 0;
   while(str[length] != '\0'){
     length++;  
   }
   return length;
}

template <typename T>
T* LowerStr(T str[]){
  int size = strLen(str);
  for(int i = 0; i< size;i++){
  if(str[i] >='A' && str[i] <= 'Z'){
      str[i] = str[i] + 32; 
  }
 }  
  return str;
}
