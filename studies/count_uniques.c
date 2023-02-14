#include <stdio.h>
#include <stdbool.h>

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

int count_uniques(int *arr, int len) {
  int count = 0;
  for (int i = 0; i < len; i++)
  {
    if(is_unique_in_array(arr[i], arr, len)) count++;
  }
  return count;
}

void main(void) {
  int array1[] = {1, 3, 5, 7, 9};
  int array2[] = {2, 4, 4, 4, 0};
  int array3[] = {2, 2, 2, 2, 2};
  int array4[] = {2, 2, 2, 2, 1};

  printf("There are %d unique number(s) in array 1\n", count_uniques(array1, 5));
  printf("There are %d unique number(s) in array 2\n", count_uniques(array2, 5));
  printf("There are %d unique number(s) in array 3\n", count_uniques(array3, 5));
  printf("There are %d unique number(s) in array 4\n", count_uniques(array4, 5));
}