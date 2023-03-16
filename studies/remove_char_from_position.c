#include <stdio.h>
#include <string.h>

void remove_char_from_position(char *string, int pos)
{
  int len = strlen(string);

  if (pos >= len || pos < 0)
  {
    printf("Position must be greater than or equal zero and less than length.\n");
    return;
  }

  while (pos < len)
  {
    string[pos] = string[pos + 1];
    pos++;
  }
}

void main(void)
{
  char string1[] = "string";
  char string2[] = "string";
  char string3[] = "string";

  printf("Before: %s\n", string1);
  remove_char_from_position(string1, -1);
  printf("After: %s\n\n\n", string1);

  printf("Before: %s\n", string1);
  remove_char_from_position(string1, 0);
  printf("After: %s\n\n\n", string1);

  printf("Before: %s\n", string2);
  remove_char_from_position(string2, 3);
  printf("After: %s\n\n\n", string2);

  printf("Before: %s\n", string3);
  remove_char_from_position(string3, 5);
  printf("After: %s\n\n\n", string3);

  printf("Before: %s\n", string3);
  remove_char_from_position(string3, 6);
  printf("After: %s\n\n\n", string3);
}