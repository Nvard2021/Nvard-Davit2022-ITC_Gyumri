#include <iostream>
#include <string>

void str_lower(char *lower);
void str_upper (char *upper);

int main() {
  char lower[8] = "HELLO";
  char upper[8] = "hello";
  str_lower(lower);
  std::cout << "lower = " << lower << std::endl;
  str_upper(upper);
  std::cout << "upper = " << upper << std::endl;
}

void str_lower (char *lower) {
  int i = 0;
  while (lower[i] != '\0') {
    if (lower[i] >= 'A' && lower[i] <= 'Z'){
      lower[i] = lower[i] + 32;
    }
    i++;
  }
}

void str_upper (char *upper) {
  int i = 0;
  while (upper[i] != '\0') {
    if (upper[i] >= 'a' && upper[i] <= 'z'){
      upper[i] = upper[i] - 32;
    }
    i++;
  }
}


