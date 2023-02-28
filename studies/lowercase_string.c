#include <stdio.h>
#include <ctype.h>

void lowercase_string(char *string)
{
  while (*string)
  {
    *string = tolower(*string);
    string++;
  }
}

void main(void)
{
  char word[] = "MARROCOS";

  printf("%s BEFORE\n", word);
  lowercase_string(word);
  printf("%s AFTER\n", word);
}