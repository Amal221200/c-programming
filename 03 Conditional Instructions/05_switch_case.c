#include <stdio.h>

int main() {
  char choice;
  printf("Choose a or b: ");
  scanf("%c", &choice);
  switch (choice) {
  case 'a':
    printf("You chose %c.\n", choice);
    break;
  case 'b':
    printf("You chose %c.\n", choice);
    break;
  default:
    printf("You didn't choose the valid option.\n");
    break;
  }
  return 0;
}
