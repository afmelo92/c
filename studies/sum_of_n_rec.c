#include <stdio.h>

int sum_of_n(int n) {
  if(n > 0) return n + sum_of_n(n - 1);
  else return 0;
}

void main(void) {
  printf("Sum of 100000 equals to %d\n", sum_of_n(100000));
}