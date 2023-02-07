/**
 * REPLACE CHAR IN A STRING WITH ANOTHER CHAR
*/
#include <stdio.h>
#include <string.h>

void replace_occurrences(char char_to_replace, char char_to_be_replaced, char *string) {
  int slen = strlen(string);

  for (int i = 0; i < slen; i++)
  {
    if(string[i] == char_to_be_replaced) {
      string[i] = char_to_replace;
    }
  }
}

void main(void) {
  char string[] = "A simple string sss thatss contains as specsssssific strssssssing strsssingx";

  printf("String before: %s\n", string);
  replace_occurrences('x', 's', string);
  printf("String after: %s\n", string);
 
}