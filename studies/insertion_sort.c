#include <stdio.h>

void insertion_sort(int *arr, int length) {
  int tmp;
  for (int i = 1; i < length; i++)
  {
    for (int j = i; j > 0; j--)
    {
      if(arr[j] < arr[j - 1]) {
        tmp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = tmp;
      }
    }
  }
}

void main(void) {
  int array[] = {6, 2, 5, 9, 3, 5, 4, 1, 7, 0, 8};

  printf("Before: \n");
  print_array(array, 11);
  insertion_sort(array, 11);
  printf("\n\nAfter: \n");
  print_array(array, 11);
}