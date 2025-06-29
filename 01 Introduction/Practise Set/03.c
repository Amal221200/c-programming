#include <stdio.h>

// Convert temperature frm °C to °F.

int main() {
  float temp_in_c, temp_in_f;
  printf("Enter the temperature in °C: ");
  scanf("%f", &temp_in_c);
  
  temp_in_f = (temp_in_c * (9.0/5)) + 32;
  printf("The temperature of %f°C in Faranheit is %f°F", temp_in_c, temp_in_f);
  return 0;
}
