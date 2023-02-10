#include <stdio.h>
#include <stdbool.h>

bool is_in_array(int item, int *arr, int len) {
  for (int i = 0; i < len; i++)
  {
    if(item == arr[i]) return true;
  }
  return false;
}

bool are_disjoints(int *arr1, int len1, int *arr2, int len2) {
  for (int i = 0; i < len1; i++)
  {
    if(is_in_array(arr1[i], arr2, len2)) return false;
  }
  return true;  
}

void main(void) {
  int array1[] = {1, 3, 5, 7, 9};
  int array2[] = {2, 4, 6, 8, 0};
  int array3[] = {11, 33, 44, 1, 66};

  printf("array1 and array2 are%s disjoints!\n", are_disjoints(array1, 5, array2, 5) ? "": " not");
  printf("array1 and array3 are%s disjoints!\n", are_disjoints(array1, 5, array3, 5) ? "": " not");
}