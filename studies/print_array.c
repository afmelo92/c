#include <stdio.h>

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

void main(void) {
  int array[] = {1, 2, 3, 4, 5};

  print_array(array, 5);
}