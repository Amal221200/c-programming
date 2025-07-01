#include <stdio.h>

int main() {
  int i = 0;
  // while (i < 4) {
  //   printf("Happy Birthday %d\n", i);
  //   i++;
  // }
  while (i <= 20) {
    if (i >= 10){
      printf("%d\n", i);
    }
    i++;
  }
  return 0;
}
