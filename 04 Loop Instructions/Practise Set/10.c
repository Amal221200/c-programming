#include <stdio.h>

int main() {
  int number, isPrime = 1;
  scanf("%d", &number);
  if (number <= 1) {
    isPrime = 0;
  } else {
    for (int i = 2; i < number; i++) {
      if (number % i == 0){
        isPrime = 0;
        break;
      }
    }
  }
  printf("%d\n", isPrime);
  return 0;
}
