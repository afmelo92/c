#include <stdio.h>

int second_lowest(int arr[], int length)
{
  if (length >= 2)
  {
    int lowest = __INT_MAX__, sec_lowest = __INT_MAX__ - 1;

    for (int i = 0; i < length; i++)
    {
      if (arr[i] < lowest)
      {
        sec_lowest = lowest;
        lowest = arr[i];
      }
      else if (arr[i] < sec_lowest && arr[i] > lowest)
      {
        sec_lowest = arr[i];
      }
    }

    return sec_lowest;
  }

  return -1;
}

void main(void)
{
  int arr[] = {0, 31, 22, 33333, 4, 51, 6, 7, 8, 9};

  printf("Second lowest is: %d\n", second_lowest(arr, 10));
}