#include <stdio.h>

// Calculate simple interest
// Formula : SI = Prt (r is in decimal form not in percentage)
int main() {
  float P = 30000, r = 2.4, t = 2, SI;
  SI = P * r * t;
  
  printf("The simple interest is %f\n", SI);
  return 0;
}
