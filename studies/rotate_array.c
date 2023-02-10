#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr, int len) {
  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void rotate_array(int *arr, int len, int times) {
  int tmp[len];
  int tmp_initial = 0;
  int initial = times + 1;

  if(times < len) {
    for (int i = 0; i < times; i++)
    {
      tmp[i] = arr[i];
    }

    for (int i = 0; initial <= len; i++)
    {
      arr[i] = arr[initial - 1];
      initial++;
    }

    for (int i = len - times; i <= len; i++, tmp_initial++)
    {
      arr[i] = tmp[tmp_initial];
    }
  } else if(times > len) {
    printf("\nRotation number must be less than or equal length\n\n");
  }
}

void main(void) {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  print_array(array, 9);
  rotate_array(array, 9, 4);
  print_array(array, 9);
}