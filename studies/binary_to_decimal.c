/**
 * CONVERTS BINARY STRING TO DECIMAL EQUIVALENT
 * BONUS: PERSONAL POW IMPLEMENTATION
*/
#include <stdio.h>
#include <string.h>

int my_pow(int base, int exp) {
  int result = 1;

  if(exp == 0) {
    return 1;
  }

  while(exp > 0) {
    result = result * base;
    exp--;
  }

  return result;
}

int binary_to_decimal(char *binary) {
  int blen = strlen(binary);
  int tmp = blen - 1;
  int result = 0;
  
  for (int i = 0; i < blen; i++)
  { 
    if(binary[i] == '1') {
      result = result + my_pow(2, tmp);
    }
    tmp--;
  }
  
  return result;
}

void main(void) {
  char binary[] = "11111111";

  printf("binary %s is equal to %d in decimal\n", binary, binary_to_decimal(binary));
  
}