#include <stdio.h>

void print_reverse_recursive(char *string)
{
  if (*string != '\0')
  {
    print_reverse_recursive(string + 1);
    printf("%c", *string);
  }
}

void main(void)
{
  char string1[] = "Listen";
  char string2[] = "Hello fellas";
  char string3[] = "This is a long string to test.";

  print_reverse_recursive(string1);
  printf("\n");
  print_reverse_recursive(string2);
  printf("\n");
  print_reverse_recursive(string3);
  printf("\n");
}