/**
 * CHECKS IF IS A LEAP YEAR OR NOT
*/
#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year) {
  if((year % 4) != 0) {
    return false;
  } else if((year % 100) != 0) {
    return true;
  } else if((year % 400) != 0) {
    return false;
  } else {
    return true;
  }
}

void main(void) {

  for (int i = 1900; i <= 2023; i++)
  {
    printf("%d %s a leap year\n", i, is_leap_year(i) ? "is" : "is not");
  }
}