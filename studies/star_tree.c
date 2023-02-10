#include <stdio.h>

void star_tree(int size) {
  int tmp = size;

  for (int i = 1; i < size; i += 2)
  {
    int s = tmp;
    while(s != 0) {
      printf(" ");
      s--;
    }
    tmp--;
    int j = 0;
    while(j != i) {
      printf("*");
      j++;
    }
    printf("\n");
  }
}

void main(void) {
  star_tree(35);
}