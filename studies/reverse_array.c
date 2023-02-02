/**
 * REVERSE AN ARRAY
*/
#include <stdio.h>

void reverse_array(int *arr, int length) {
    int aux;
    for (int i = 0; i < (length/2); i++)
    {
        aux = arr[i];
        arr[i] = arr[length-(i+1)];
        arr[length-(i+1)] = aux;
    }
    
}

void main(void) {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8};

  reverse_array(array, 8);
}