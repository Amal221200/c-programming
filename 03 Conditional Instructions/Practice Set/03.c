#include <stdio.h>

int main() {
  float income;
  printf("Enter your income: ");
  scanf("%f", &income);
  if (income >= 250000 && income < 500000) {
    printf("You need to pay %.2f for your tax\n", (income - 250000) * 0.05);
  } else if (income >= 500000 && income < 1000000) {
    printf("You need to pay %.2f for your tax\n",
           250000 * 0.05 + (income - 500000) * 0.20);
  } else if (income >= 1000000) {
    printf("You need to pay %.2f for your tax\n",
           250000 * 0.05 + 500000 * 0.20 + (income - 1000000) * 0.30);
  } else {
    printf("No tax for you\n");
  }
  return 0;
}
