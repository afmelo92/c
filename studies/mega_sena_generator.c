#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void mega_sena_generator(int numbers)
{

  int already_used[numbers];
  bool unique;
  srand(time(NULL));

  memset(already_used, 0, numbers);

  for (int i = 0; i < numbers; i++)
  {
    int random = 0;

    do
    {
      random = (rand() % 59) + 1;
      unique = true;
      for (int j = 0; j < i; j++)
        if (already_used[j] == random)
          unique = false;
    } while (!unique);

    already_used[i] = random;

    printf("%d", random);

    if (i < numbers - 1)
    {
      printf(" - ");
    }
  }

  printf("\n");
}

int main(void)
{

  mega_sena_generator(6);

  return 0;
}