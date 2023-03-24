#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_letters(char arr[])
{
  int letters = 0;
  int length = strlen(arr);

  if (length > 0)
  {

    for (int i = 0; i < length; i++)
    {
      if (isalpha(arr[i]))
        letters++;
    }

    return letters;
  }

  return -1;
}

void main(void)
{
  char string[] = "\n\n\n\t\t       \t\t      hello!Amigos.";

  printf("Letters in string: %d\n", count_letters(string));
}