#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void filter_non_digits(char *string) {
  int i = 0;
  while(string[i] != '\0') {
    if(!isdigit(string[i])) {
      int j = i;
      while(string[j] != '\0') {
        string[j] = string[j+1];
        j++;
      }
    } else {
      i++;
    }
  }
}


void main(void) {
  char zipcode[] = "86514-030";

  printf("Before: %s\n", zipcode);
  filter_non_digits(zipcode);
  printf("After: %s\n", zipcode);

}