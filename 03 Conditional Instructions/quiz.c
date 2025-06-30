#include <stdio.h>

int main() {
  float perc;
  printf("Enter your percentage: ");
  scanf("%f", &perc);
  if (100 >= perc && perc >= 90) {
    printf("A\n");
  } else if (90 >= perc && perc >= 80) {
    printf("B\n");
  } else if (80 >= perc && perc >= 70) {
    printf("C\n");
  } else if (70 >= perc && perc >= 60) {
    printf("D\n");
  } else if (60 >= perc && perc >= 50) {
    printf("E\n");
  } else if (perc <= 50) {
    printf("F\n");
  } else {
    printf("Percentage is too high\n");
  }
  return 0;
}
