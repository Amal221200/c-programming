#include <stdio.h>

// Write a C program to calculate the area of an rectangle.
// 01. using hardcoded values.

// int main() {
//   int l = 12, b = 6;
  
//   int area = l * b;
//   printf("The area of the reactangle of length %d cm and breadth %d cm is: %d sqcm\n", l, b, area);
//   return 0;
// }

// 02. using user input.
int main() {
  int length, breadth;
  printf("Enter the length in cm: ");
  scanf("%d", &length);
  printf("Enter the width in cm: ");
  scanf("%d", &breadth);
  int area = length * breadth;
  printf("The area of the reactangle of length %d cm and breadth %d cm is: %d sqcm\n", length, breadth, area);
  return 0;
}
