#include <stdio.h>
#include <string.h>

int char_occurrence(char c, char *string)
{
  int slen = strlen(string);
  int occurrence_counter = 0;

  for (int i = 0; i < slen; i++)
  {
    if (c == string[i])
    {
      occurrence_counter++;
    }
  }

  return occurrence_counter;
}

void ocurrences(char *string)
{
  int len = strlen(string);
  char used[len];
  int j = 0;
  for (int i = 0; i < len; i++)
  {
    if (!find_in_string(string[i], used))
    {
      used[j] = string[i];
      printf("occurrences of %c: %d\n", string[i], char_occurrence(string[i], string));
      j++;
    }
  }
}

void main(void)
{
  char string1[] = "Listen";
  char string2[] = "aaaXccvvDaqqwwtt";
  char string3[] = "XXaaDDddTTaaSGLLCC";

  ocurrences(string1);
  ocurrences(string2);
  ocurrences(string3);
}