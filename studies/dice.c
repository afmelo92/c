#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int dice_roll(int times) {
  srand(time(NULL));

  for (int i = 0; i < times; i++)
  {
    printf("Roll[%d]: %d\n", i+1, rand() % 6 + 1);
  }
  
}

void main(void) {
  dice_roll(3);
}