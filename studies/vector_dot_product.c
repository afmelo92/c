/**
 * CALCULATES THE VECTOR DOT PRODUCT
*/
#include <stdio.h>
#include <stdlib.h>

int vector_dot_product(int *v1, int *v2, int length) {
  int result = 0;

  for (int i = 0; i < length; i++)
  {
    result = result + (v1[i] * v2[i]);  
  }
  return result;
}

void main(void) {
  int vec1[] = {10, 21, 32, 43, 55};
  int vec2[] = {5, 4, 3, 2, 1};

  printf("Dot product is: %d\n", vector_dot_product(vec1, vec2, 5));
}