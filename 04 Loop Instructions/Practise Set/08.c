#include <stdio.h>

int main() {
  int number, fact = 1;
  scanf("%d", &number);
  
  for (int i = 2; i <= number; i++) {
    fact *= i;
  }
  
  printf("%d\n", fact);
  return 0;
}
