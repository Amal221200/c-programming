#include <stdio.h>

int main() {
  int perc1, perc2, perc3;

  printf("Enter the percentage of 1st subject: ");
  scanf("%d", &perc1);

  printf("Enter the percentage of 2nd subject: ");
  scanf("%d", &perc2);

  printf("Enter the percentage of 3rd subject: ");
  scanf("%d", &perc3);

  int avg_perc = (perc1 + perc2 + perc3) / 3;

  if (perc1 >= 33 && perc2 >= 33 && perc3 >= 33 && avg_perc >= 40) {
    printf("Passed\n");
  } else {
    printf("Failed\n");
  }
  return 0;
}
