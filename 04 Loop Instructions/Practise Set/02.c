#include <stdio.h>

// Print a given multiplication of 10 in reverse
int main() {
  int number = 10;
  
  for (int i = 10; i > 0; i--) {
    printf("%d x %d = %d\n", number, i, number * i);
  }
  return 0;
}
