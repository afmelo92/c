#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

bool is_unique_in_array(int item, int *arr, int len)
{
  int count = 0;
  for (int i = 0; i < len; i++)
  {
    if (item == arr[i])
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

void print_array(int *arr, int length)
{
  for (int i = 0; i < length; i++)
  {
    printf("%d", arr[i]);

    if (i < (length - 1))
    {
      printf("-");
    }
  }
  printf("\n");
}

void merge_arrays(int *result, int *arr1, int len1, int *arr2, int len2)
{
  for (int i = 0; i < (len1 + len2); i++)
  {
    if (i < len1)
    {
      result[i] = arr1[i];
    }
    else
    {
      result[i] = arr2[i - len2];
    }
  }
}

void bubble_sort_two_arrays(int *result, int *arr1, int len1, int *arr2, int len2)
{
  int aux;
  for (int i = 0; i < (len1 + len2); i++)
  {
    for (int j = 0; j < (len1 + len2); j++)
    {
      if (result[i] < result[j])
      {
        aux = result[i];
        result[i] = result[j];
        result[j] = aux;
      }
    }
  }
}

int *merge_and_sort(int *arr1, int len1, int *arr2, int len2)
{
  int *result = (int *)malloc((sizeof(int)) * (len1 + len2));

  merge_arrays(result, arr1, len1, arr2, len2);
  bubble_sort_two_arrays(result, arr1, len1, arr2, len2);

  return result;
}

void uppercase_string(char *string)
{
  while (*string)
  {
    *string = toupper(*string);
    string++;
  }
}

void lowercase_string(char *string)
{
  while (*string)
  {
    *string = tolower(*string);
    string++;
  }
}

void trim_leading_spaces(char *string)
{
  int i = 0;
  while (string[i] == '\n' || string[i] == '\t' || string[i] == ' ')
  {
    i++;
  }

  if (i != 0)
  {
    int j = 0;
    while (string[j + i] != '\0')
    {
      string[j] = string[j + i];
      j++;
    }
    string[j] = '\0';
  }
}

char *trim_leading_spaces_safe(char *string)
{
  int i = 0, j = 0;

  while (string[i] == '\n' || string[i] == '\t' || string[i] == ' ')
  {
    i++;
  }

  int len = abs(strlen(string) - i);

  char *new = malloc(sizeof(char) * len);

  while (string[i] != '\0')
  {
    new[j] = string[i];
    j++;
    i++;
  }

  new[len] = '\0';

  return new;
}

void trim_trailing_spaces(char *string)
{
  int len = strlen(string);
  int i = 0;

  while (string[len - i - 1] == '\0' || string[len - i - 1] == '\n' || string[len - i - 1] == '\t' || string[len - i - 1] == ' ')
  {
    i++;
  }

  string[len - i] = '\0';
}

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

int word_count(char *string)
{
  int len = strlen(string);
  int wc = 0;
  char non_words[] = " .,;\n\t";

  for (int i = 0; i < len; i++)
  {
    if (!find_in_string(string[i], non_words))
    {
      while (i < len)
      {
        if (find_in_string(string[i], non_words))
        {
          wc++;
          break;
        }
        i++;
      }
    }
  }

  return wc;
}

double arithmetic_average(double sum, int total)
{
  return sum / total;
}

double sum_arr(double *arr, int length)
{
  float total = 0;

  for (int i = 0; i < length; i++)
  {
    total = total + arr[i];
  }

  return total;
}

double standard_deviation(double *arr, int length)
{
  double total = 0;
  double arm_avg = arithmetic_average(sum_arr(arr, length), length);

  for (int i = 0; i < length; i++)
  {
    total = total + ((arr[i] - arm_avg) * (arr[i] - arm_avg));
  }

  return sqrt(total / length);
}