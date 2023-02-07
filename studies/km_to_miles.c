/**
 * CONVERTS KM TO MILES
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

float km_to_miles(float distance, int mode) {
  if(mode == 1) {
    return distance * 0.6213711922;
  } else if(mode == 2) {
    return distance *  1.609344;
  }
}

void main(void) {
  int mode;
  char op;
  float distance;

  do
  {
    system("clear");
    printf("KM TO MILES CONVERTER\n\n(1)KM -> MILES\n(2)MILES -> KM\n\nChoose mode: ");
    scanf(" %d", &mode);
   
    if(mode != 1 && mode != 2) {
      printf("Invalid mode. Please, try again later.\n");
      break;
    }
    printf("Insert distance in %s: ", mode == 1 ? "Km" : "Miles");
    scanf(" %f", &distance);
    printf("%f %s equal to %f %s\n", distance, mode == 1 ? "Km" : "Miles", km_to_miles(distance, mode), mode == 1 ? "Miles" : "KM");
    printf("\nWanna try again? (Y)es or (N)o: ");
    scanf(" %c", &op);
  } while (toupper(op) == 'Y');
}