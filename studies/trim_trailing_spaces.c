#include <stdio.h>
#include <string.h>

void trim_trailing_spaces(char *string) {
  int len = strlen(string);
  int i = 0;
  int count = 0;

  while(string[len - i - 1] == '\0' || string[len - i - 1] == '\n' || string[len - i - 1] == '\t' || string[len - i - 1] == ' ') {
    i++;
  }

  string[len - i] = '\0';
}

void main(void) {
  char trailing_word[] = "An interesting string.          \n\n   \t \n ";

  printf("Before: %s", trailing_word);
  trim_trailing_spaces(trailing_word);
  printf("After: %s", trailing_word);
}