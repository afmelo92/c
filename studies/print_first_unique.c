#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_unique_in_string(char item, char *string)
{
  int len = strlen(string);
  int count = 0;
  for (int i = 0; i < len; i++)
  {
    if (item == string[i])
    {
      count++;
    }

    if (count > 1)
    {
      return false;
    }
  }
  return true;
}

void print_first_unique(char *string)
{
  int len = strlen(string);

  for (int i = 0; i < len; i++)
  {
    if (is_unique_in_string(string[i], string))
    {
      printf("First unique: %c\n", string[i]);
      break;
    }
  }
}

void main(void)
{
  char string1[] = "Listen";
  char string2[] = "aaaXccvvDaqqwwtt";
  char string3[] = "XXaaDDddTTaaSGLLCC";

  print_first_unique(string1);
  print_first_unique(string2);
  print_first_unique(string3);
}