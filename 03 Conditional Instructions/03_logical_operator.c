#include <stdio.h>
#include <stdbool.h>

int main() {
  bool cond1 = true;
  bool cond2 = false;
  
  // 01. AND operator
  bool and = cond1 && cond2;
  
  // 02. OR operator
  bool or = cond1 || cond2;
  
  // 03. NOT operator
  bool not = !cond1;
  
  return 0;
}
