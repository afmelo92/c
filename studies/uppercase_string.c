#include <stdio.h>
#include <ctype.h>

void uppercase_string(char *string) {
  while(*string) {
    *string = toupper(*string);
    string++;
  }
}

void main(void) {
  char word[] = "marrocos";

  printf("%s BEFORE\n", word);
  uppercase_string(word);
  printf("%s AFTER\n", word);
}