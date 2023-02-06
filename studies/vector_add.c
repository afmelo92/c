/**
 * ADD TWO VECTORS WITH DYNAMIC MEMORY ALLOCATION
*/
#include <stdio.h>
#include <stdlib.h>

void print_vector(int *vector, int length){
  for (int i = 0; i < length; i++)
  {
    printf("vector[%d]: %d\n", i, vector[i]);
  }
}

int *vector_add(int *v1, int *v2, int length) {
  int *tmp = malloc(sizeof(int) * length);

  for (int i = 0; i < length; i++)
  {
    tmp[i] = v1[i] + v2[i];  
  }
  return tmp;
}

void main(void) {
  int vec1[] = {10, 21, 32, 43, 55};
  int vec2[] = {5, 4, 3, 2, 1};
  int *result;

  result = vector_add(vec1, vec2, 5);

  print_vector(result, 5);

  free(result);
}