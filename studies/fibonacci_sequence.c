/**
 * CALCULATES FIBONACCI SEQUENCE
*/
#include <stdio.h>
#include <stdlib.h>

void fibonacci(int length) {
    int result = 0;
    int term1 = 0;
    int term2 = 1;

    printf("%d - %d - ", term1, term2);

    for (int i = 2; i < length; i++)
    {
      result = term1 + term2;
      printf("%d", result);
      if(i < (length-1)) {
        printf(" - ");
      }
      term1 = term2;
      term2 = result;
    }
    printf("\n");
}

void main(void) {
  int length = 3;

  do
  {
    printf("Insert fibonacci length: ");
    scanf(" %d", &length);

    if(length < 3) {
      printf("\nLength must be greater than or equal to 3\n\n\n");
    }
  } while (length < 3);
  
  system("clear");
  printf("Fibonacci sequence for length %d\n", length);
  fibonacci(length);
}