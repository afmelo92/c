#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

bool is_unique_in_array(int item, int *arr, int len) {
  int count = 0;
  for (int i = 0; i < len; i++)
  {
    if(item == arr[i]) {
      count++;
    }

    if(count > 1) {
      return false;
    }
  }
  return true;
}

void print_array(int *arr, int length) {
  for (int i = 0; i < length; i++)
  {
    printf("%d", arr[i]);
    
    if(i < (length -1)) {
      printf("-");
    }
  }
    printf("\n");
}

void merge_arrays(int *result, int *arr1, int len1, int *arr2, int len2) {
  for (int i = 0; i < (len1 + len2); i++)
  {
    if(i < len1) {
      result[i] = arr1[i];
    } else {
      result[i] = arr2[i - len2];
    }
  }
}

void bubble_sort_two_arrays(int *result, int *arr1, int len1, int *arr2, int len2) {
  int aux;
  for (int i = 0; i < (len1 + len2); i++)
  {
    for (int j = 0; j < (len1 + len2); j++)
    {
      if(result[i] < result[j]) {
        aux = result[i];
        result[i] = result[j];
        result[j] = aux;
      }
    }
  }
}

int *merge_and_sort(int *arr1, int len1, int *arr2, int len2) {
  int *result = (int*)malloc((sizeof(int))*(len1+len2));

  merge_arrays(result, arr1, len1, arr2, len2);
  bubble_sort_two_arrays(result, arr1, len1, arr2, len2);
  
  return result;
}

void uppercase_string(char *string) {
  while(*string) {
    *string = toupper(*string);
    string++;
  }
}