#include <stdio.h>

// Calculate the area of the circle and modify it to calculate the volume of the cylinder given its radius and height.
const float PI = 3.14;

int main() {
  int radius = 5;
  float area = PI * radius * radius; // πr²
  int height = 15;
  float volume = area * height; // πr²h
  printf("The area of the circle of radius %d is %f\n", radius, area);
  printf("The volume of the cylinder of radius %d and height %d is %f\n", radius, height, volume);
  return 0;
}
