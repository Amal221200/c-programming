#include <stdio.h>

// Write program 5 using other loops
int main() {
  // 01. Do while loop
  // int num = 1, sum = 0;
  // do {
  //   sum += num;
  //   num++;
  // } while (num <= 10);

  // 02. For loop
  int sum = 0;
  for (int num = 1; num <= 10; num++) {
    sum += num;
  }
  printf("%d", sum);
  return 0;
}
