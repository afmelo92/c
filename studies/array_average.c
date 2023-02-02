/**
 * ARRAY AVERAGE
*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

float average(int *arr, int length) {
    float sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + arr[i];
    }

    return sum / length;
}

void main(void) {
  int array1[] = {1, 1, 1, 1, 1}; // 5
  int array2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 50
  int array3[] = {123, 444, 1, 23, 5, 3}; // 596

  printf("array1 average is: %.2f\n", average(array1, 5));
  printf("array2 average is: %.2f\n", average(array2, 10));
  printf("array3 average is: %.2f\n", average(array3, 6));
}