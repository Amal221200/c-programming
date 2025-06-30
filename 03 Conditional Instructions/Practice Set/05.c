#include <stdio.h>

int main() {
  char character;
  printf("Enter a singe character: ");
  scanf("%c", &character);

  if (character >= 97 && character <= 122) {
    printf("It's a lower case character\n");
  } else {
    printf("It's not a lower case character\n");
  }
  return 0;
}
