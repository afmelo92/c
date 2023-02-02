/**
 * SUM ARRAY VALUES
*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int sum_values(int *arr, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
      sum = sum + arr[i];
    }

    return sum;
}

void main(void) {
  int array1[] = {1, 1, 1, 1, 1}; // 5
  int array2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 50
  int array3[] = {123, 444, 1, 23, 5}; // 596

  printf("array1 sum is: %d\n", sum_values(array1, 5));
  printf("array2 sum is: %d\n", sum_values(array2, 10));
  printf("array3 sum is: %d\n", sum_values(array3, 5));
}