#include <stdio.h>

int main() {
  int n = 6;
  for (int i = 1; i <= n; i++) {
    if (i == n) {
      printf("%d\n", i);
      continue;
    }
    printf("%d, ", i);
  }
  return 0;
}
