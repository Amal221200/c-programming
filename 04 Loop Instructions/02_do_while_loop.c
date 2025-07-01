#include <stdio.h>

int main() {
  int input, i = 1;
  printf("Enter the amount of natural numbers: ");
  scanf("%d", &input);
  // do {
  //   printf("Happy Birthday %d\n", i);
  //   i++;
  // } while (i < 4);
  
  do {
    printf("%d\n", i);
    i++;
  } while (i <= input);
  return 0;
}
