#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_punctuations(char *string)
{
  int count = 0;
  int len = strlen(string);

  for (int i = 0; i < len; i++)
  {
    if (ispunct(string[i]))
      count++;
  }
  return count;
}

void main(void)
{
  char string[] = "A ,.; simple, string, to, test, punctuations...";

  printf("Punctuations in string: %d\n", count_punctuations(string));
}