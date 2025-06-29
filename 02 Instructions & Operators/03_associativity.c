#include <stdio.h>

int main() {
  int a = 2, b = 3, c = 4;
  
  printf("%d\n", a+b-c);
  printf("%d\n", a-b+c);
  printf("%d\n", a*b/c); // 1 (it would be 1.5 if the data type was float)
  printf("%d\n", a/b*c); // 0 (it would be 0.5 if the data type was float)
  return 0;
}
