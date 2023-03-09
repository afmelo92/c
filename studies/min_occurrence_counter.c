#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool find_in_string(char c, char *arr)
{
  while (*arr)
  {
    if (c == *arr)
      return true;
    arr++;
  }
  return false;
}

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

void min_ocurrences(char *string)
{
  int len = strlen(string);
  char used[len], min_char[len], non_words[] = " .,;\n\t";
  int j = 0, k = 0, l = 0, aux = 0, min_counter = 255;

  memset(used, '\0', len);
  memset(min_char, '\0', len);

  for (int i = 0; i < len; i++)
  {
    if (!find_in_string(string[i], non_words) && !find_in_string(string[i], used))
    {
      used[j] = string[i];
      aux = char_occurrence(string[i], string);
      printf("aux: %d | min_counter: %d | string[%d]: %c\n", aux, min_counter, i, string[i]);

      if (aux == min_counter)
      {
        min_char[k] = string[i];
        k++;
        min_char[k] = '\0';
      }
      else if (aux < min_counter)
      {
        min_counter = aux;
        min_char[l] = string[i];
        min_char[1] = '\0';
        k = 1;
        l = 0;
      }
      printf("min_char: %s\n", min_char);

      j++;
    }
  }
  printf("Char(s): %s  |  counter: %d\n\n", min_char, min_counter);
}

void main(void)
{
  char string1[] = "Lis  ten\n";
  char string2[] = "aaaXXc   cvv\nDDaqqwwtt";
  char string3[] = "XXaapXXXX      \nDDddTTaaSGLLCC";
  char string4[] = "XXaa      \nDDddTTaaSSSSGGLLCCz";

  min_ocurrences(string1);
  min_ocurrences(string2);
  min_ocurrences(string3);
  min_ocurrences(string4);
}