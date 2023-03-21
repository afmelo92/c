#include <stdio.h>

int second_highest(int arr[], int length)
{
  if (length >= 2)
  {
    int highest = 0, sec_highest = 0;

    for (int i = 0; i < length; i++)
    {
      if (arr[i] > highest)
      {
        sec_highest = highest;
        highest = arr[i];
      }
      else if (arr[i] > sec_highest && arr[i] < highest)
      {
        sec_highest = arr[i];
      }
    }

    return sec_highest;
  }

  return -1;
}

void main(void)
{
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  printf("Second highest is: %d\n", second_highest(arr, 10));
}