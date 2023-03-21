#include <stdio.h>

void fizz_buzz(int limit)
{
  for (int i = 1; i <= limit; i++)
  {
    if (i % 3 == 0 && i % 5 == 0)
    {
      printf("Fizz Buzz\n");
    }
    else if (i % 3 == 0)
    {
      printf("Fizz\n");
    }
    else if (i % 5 == 0)
    {
      printf("Buzz\n");
    }
    else
    {
      printf("%d\n", i);
    }
  }
}

void main(void)
{
  fizz_buzz(17);
}