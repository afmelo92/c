#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr, int len) {
  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void rotate_array_left(int *arr, int len, int times) {
  int tmp[times];

  if(times > len) {
    times = times % len;
  }

  if(times > 0) {
    for (int i = 0; i < times; i++)
    {
      tmp[i] = arr[i];
    }

    for (int i = 0; (i + times) < len; i++)
    {
      arr[i] = arr[i + times];
    }
     
    for (int i = len - times, j = 0; i < len; i++, j++)
    {
      arr[i] = tmp[j];
    }
  }
}

void rotate_array_right(int *arr, int len, int times) {
  int tmp[times];
  
  if(times > len) {
    times = times % len;
  }

  if(times > 0) {
    for (int i = 0; i < times; i++)
    {
      tmp[i] = arr[len - times + i];
    }

    for (int i = (len - times - 1), j = len - 1; i >= 0; i--, j--)
    {
      arr[j] =  arr[i];
    }

    for (int i = 0; i < times; i++)
    {
      arr[i] = tmp[i];
    }
  }
}

void main(void) {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  printf("Normal: ");
  print_array(array, 9);
  rotate_array_right(array, 9, 1);
  printf("\nRight: ");
  print_array(array, 9);
  rotate_array_left(array, 9, 2);
  printf("\nLeft: ");
  print_array(array, 9);
}