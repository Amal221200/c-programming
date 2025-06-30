#include <stdio.h>

int main() {
  char *result = 10 % 5 == 0 ? "Yes" : "No";
  
  printf("%s\n", result);
  return 0;
}
