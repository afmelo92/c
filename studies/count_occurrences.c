#include <stdio.h>

int count_occurrences(int *arr, int item_to_find, int length) {
  int count = 0;

  for (int i = 0; i < length; i++)
  {
    if(arr[i] == item_to_find) {
      count++;
    }
  }
  return count;
}

void main(void) {

  int array[] = {1, 2, 2, 3, 4, 5, 5, 5, 6, 6, 6, 6, 7, 8, 9, 9, 9, 9, 9, 9, 9, 9, 0};

  printf("There are %d occurrences of %d in this array", 
          count_occurrences(array, 9, 23), 9);

}