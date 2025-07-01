#include <stdio.h>

int main() {
  int number, fact = 1, i = 2;
  scanf("%d", &number);
  
  while (i <= number) {
    fact *= number;
    i++;
  }
  
  printf("%d\n", fact);
  return 0;
}
