#include <stdio.h>
#include <stdlib.h>

void trim_leading_spaces(char *string) {
  int i = 0;
  while(string[i] == '\n' || string[i] == '\t' || string[i] == ' ') {
    i++;
  }

  if(i != 0) {
    int j = 0;
    while(string[j + i] != '\0') {
      string[j] = string[j + i];
      j++;
    }
    string[j] = '\0';
  }
}

char *trim_leading_spaces_safe(char *string) {
  int i = 0, j = 0;
  
  while(string[i] == '\n' || string[i] == '\t' || string[i] == ' ') {
    i++;
  }

  int len = abs(strlen(string) - i);

  char *new = malloc(sizeof(char)*len);

  while(string[i] != '\0') {
    new[j] = string[i];
    j++;
    i++;
  }

  new[len] = '\0';

  return new;
}

void main(void) {
  char word[] = "          \n\n   \t \n An interesting string.";

  printf("Before: %s\n", word);
  trim_leading_spaces(word);
  printf("After: %s\n", (word));
}