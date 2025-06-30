#include <stdio.h>

int main() {
  int a, b, c, d, result;
  printf("Enter the first number: ");
  scanf("%d", &a);

  printf("Enter the second number: ");
  scanf("%d", &b);

  printf("Enter the third number: ");
  scanf("%d", &c);

  printf("Enter the fourth number: ");
  scanf("%d", &d);

  if (a > b && a > c && a > d) {
    result = a;
  } else if (b > a && b > c && b > d) {
    result = b;
  } else if (c > b && c > a && c > d) {
    result = c;
  } else {
    result = d;
  }

  printf("The greatest number is %d\n", result);
  return 0;
}
