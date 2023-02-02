/**
 * TRANSFORM CELSIUS TEMP IN FARENHEIT CORRESPONDENT AND VICE-VERSA
*/
#include <stdio.h>
#include <ctype.h>

float celsius_farenheit(float temp, char mode) {
    mode = toupper(mode);
    float result = 0;

    if(mode == 'F') {
      result = (temp - 32)/1.8;
      return result;
    } else if(mode == 'C') {
      result = (temp*1.8)+32;
      return result;
    } else {
      printf("Please, select between C and F modes only.\n");
      return -1;
    }
}

void main(void) {
  printf("32 celsius to farenheit: %.2f\n", celsius_farenheit(32, 'c'));
  printf("64 celsius to farenheit: %.2f\n", celsius_farenheit(64, 'c'));
  printf("12 celsius to farenheit: %.2f\n", celsius_farenheit(12, 'c'));
  printf("156 celsius to farenheit: %.2f\n", celsius_farenheit(156, 'c'));
  printf("-3 celsius to farenheit: %.2f\n", celsius_farenheit(-3, 'c'));
  printf("0 celsius to farenheit: %.2f\n", celsius_farenheit(0, 'c'));

  printf("0 celsius to KELVIN: %.2f\n", celsius_farenheit(0, 'k'));

  printf("32 farenheit to celsius: %.2f\n", celsius_farenheit(32, 'f'));
  printf("64 farenheit to celsius: %.2f\n", celsius_farenheit(64, 'f'));
  printf("12 farenheit to celsius: %.2f\n", celsius_farenheit(12, 'f'));
  printf("156 farenheit to celsius: %.2f\n", celsius_farenheit(156, 'f'));
  printf("-3 farenheit to celsius: %.2f\n", celsius_farenheit(-3, 'f'));
  printf("0 farenheit to celsius: %.2f\n", celsius_farenheit(0, 'f'));
}