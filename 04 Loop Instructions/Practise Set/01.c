#include <stdio.h>

// Print a given multiplication of a given number n
int main() {
  int number;
  printf("Enter a number to print it's multiplication: ");
  scanf("%d", &number);
  
  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", number, i, number * i);
  }
  return 0;
}
