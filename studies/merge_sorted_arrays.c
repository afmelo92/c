#include <stdio.h>

void print_array(int *arr, int len) {
  for (int i = 0; i < len; i++)
  {
    printf(" %d ", arr[i]);
    if(i < (len - 1)) {
      printf("-");
    }
  }
  printf("\n");
}

int *merge_and_sort(int *arr1, int len1, int *arr2, int len2) {
  int aux;
  int *result = malloc((sizeof(int))*(len1+len2));

  for (int i = 0; i < (len1 + len2); i++)
  {
    if(i < len1) {
      result[i] = arr1[i];
    } else {
      result[i] = arr2[i - len2];
    }
  }

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
  return result;
}

void main(void) {
  int array1[] = {1, 3, 5, 7, 9};
  int array2[] = {2, 4, 6, 8, 0};

  print_array(merge_and_sort(array1, 5, array2, 5), 10);
}