#include <iostream>
#include <string>

char *str_reverse (char *str);

int main () {
  char str[8] = "Mobile";
  std::cout << "frst: " << str << std::endl;
  *str_reverse(str);
  std::cout << "revers: " << str << std::endl;
}

int str_len (char *str) {
  int length = 0;
  while (str[length] != '\0'){
    ++length;
  }
  return length;
}

char *str_reverse (char *str) {
  int length = str_len(str);
  for (int i = 0; i < length / 2; i++){
    char temp = str[i];
    str[i] = str[length - i - 1];
    str[length -i - 1] = temp;
  }
  return str;
}

