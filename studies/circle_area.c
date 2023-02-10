#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define PI 3.14159265359

float circle_area(float radius) {
  return PI*radius*radius;
}


void main(void) {
  char op;
  float radius;

  do {
    system("clear");
    printf("\n\nCircle Area\n\n");
    printf("Insert radius: ");
    scanf(" %f", &radius);
    printf("\n\nCircle area: %.2f", circle_area(radius));
    printf("\n\nWanna try again? (Y or N)");
    scanf(" %c", &op);
  } while(toupper(op) != 'N');
}