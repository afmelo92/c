#include <stdio.h>
#include <string.h>

void print_until_newline(char *string)
{
  int len = strlen(string);

  for (int i = 0; i < len; i++)
  {
    if (string[i] == '\n')
      break;
    printf("%c", string[i]);
  }
  printf("\n");
}

void main(void)
{
  char string1[] = "Listen\n";
  char string2[] = "aa    aXcc   vv\nDaqqwwtt";
  char string3[] = "XXaa      \nDDddTTaaSGLLCC";

  print_until_newline(string1);
  print_until_newline(string2);
  print_until_newline(string3);
}