#include <stdio.h>
#include <string.h>

void reverse_words(char *string) {
  int len = strlen(string);
  int i = 0, j = 0;
  char tmp[25];

  for (i = 0; i < len; i++)
  {
    for (j = 0; i < len; j++, i++)
    {
      if(string[i] == ' ' || string[i] == '.') {
        break;
      }
      tmp[j] = string[i];
    }
    while(j > 0) {
      j--;
      string[i - j - 1] = tmp[j];
    }
  }
}

void main(void) {
  char word[] = "An interesting string to modify.";

  printf("Before: %s\n", word);
  reverse_words(word);
  printf("After: %s\n", word);
}