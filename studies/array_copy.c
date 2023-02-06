/**
 * COPY ARRAY IN RUNTINE
*/
#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr, int length) {
  for (int i = 0; i < length; i++)
  {
    printf("item[%d]: %d\n", i, arr[i]);
  }
}

int *array_copy(int *arr, int length) {
  int *tmp = malloc(sizeof(int)*length);
  for (int i = 0; i < length; i++)
  {
    tmp[i] = arr[i];
  }
  return tmp;
}

void main(void) {
  int array[] = {1, 2, 3, 4, 5, 6};
  int *copy;
  
  copy = array_copy(array, 6);

  printf("original: \n");
  print_array(array, 6);
  printf("\n\ncopy\n");
  print_array(copy, 6);
}