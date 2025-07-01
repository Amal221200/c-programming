#include <stdio.h>

// Write s program to calculate the sum of the multiples of 8 (from 1 to 10)
int main() {
  int sum = 0;
  for (int i = 1; i <= 10; i++) {
    sum += 8 * i;
  }
  printf("%d\n", sum);
  return 0;
}
