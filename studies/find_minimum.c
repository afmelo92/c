/**
 * FIND MINIMUM NUMBER IN ARRAY
*/
#include <stdio.h>

int find_minimum(int *arr, int length) {
    int aux = arr[0];

    for (int i = 1; i < length; i++)
    {
        if(arr[i] < aux) {
            aux = arr[i];
        }
    }

    return aux;
}

void main(void)
{
    int example_array[] = {11, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Minimum: %d\n", find_minimum(example_array, 10));
}