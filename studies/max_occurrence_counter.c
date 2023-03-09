#include <stdio.h>
#include <stdbool.h>
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

void max_ocurrences(char *string)
{
  int len = strlen(string);
  char used[len], max_char[len], non_words[] = " .,;\n\t";
  int j = 0, k = 0, l = 0, aux = 0, max_counter = 0;

  memset(used, '\0', len);
  memset(max_char, '\0', len);

  for (int i = 0; i < len; i++)
  {
    if (!find_in_string(string[i], non_words) && !find_in_string(string[i], used))
    {
      used[j] = string[i];
      aux = char_occurrence(string[i], string);
      printf("aux: %d | max_counter: %d | string[%d]: %c\n", aux, max_counter, i, string[i]);

      if (aux > max_counter)
      {
        max_counter = aux;
        max_char[l] = string[i];
        max_char[1] = '\0';
        k = 1;
        l = 0;
      }
      else if (aux == max_counter)
      {
        max_char[k] = string[i];
        k++;
        max_char[k] = '\0';
      }
      printf("max_char: %s\n", max_char);
      j++;
    }
  }
  printf("Char(s): %s  |  counter: %d\n\n", max_char, max_counter);
}

void main(void)
{
  char string1[] = "Lis  ten\n";
  char string2[] = "aaaXXc   cvv\nDDaqqwwtt";
  char string3[] = "XXaapXXXX      \nDDddTTaaSGLLCC";
  char string4[] = "XXaa      \nDDddTTaaSSSSGGLLCCz";

  max_ocurrences(string1);
  max_ocurrences(string2);
  max_ocurrences(string3);
  max_ocurrences(string4);
}