#include <stdio.h>

int main() {
  int number, isPrime = 1;
  scanf("%d", &number);
  if (number <= 1) {
    isPrime = 0;
  } else {
    int i = 2 ;
    // while (i < number) {
    //   if (number % i == 0){
    //     isPrime = 0;
    //     break;
    //   }
    //   i++;
    // }
    do {
      if (number % i == 0 && number != 2){
        isPrime = 0;
        break;
      }
      i++;
    } while (i < number);
  }
  printf("%d\n", isPrime);
  return 0;
}
