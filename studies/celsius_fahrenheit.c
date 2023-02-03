/**
 * TRANSFORM CELSIUS TEMP IN FARENHEIT CORRESPONDENT AND VICE-VERSA
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

float celsius_farenheit(float temp, char mode) {
    mode = toupper(mode);
    float result = 0;

    if(mode == 'F') {
      result = (temp - 32)/1.8;
      return result;
    } else if(mode == 'C') {
      result = (temp*1.8)+32;
      return result;
    }
}

void main(void) {
  float temp = 0;
  char op;

  do
  {
    printf("\nSelect mode:\n(C)elsius\n(F)arenheit\n(Q)uit\n");
    scanf(" %c", &op);

    system("clear");

    if(toupper(op) == 'C'){
      printf("\nInsert temperature in Celsius: ");
      scanf(" %f",&temp);
      printf("\n\n%.2f celsius to farenheit: %.2f\n", temp, celsius_farenheit(temp, 'c'));
    } else if(toupper(op) == 'F') {
      printf("\nInsert temperature in Fahrenheit: ");
      scanf(" %f",&temp);
      printf("\n\n%.2f farenheit to celsius: %.2f\n", temp, celsius_farenheit(temp, 'f'));
    }

  } while (toupper(op) != 'Q');
}