#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

void coin_toss()
{
  srand(time(NULL));
  char op = 'N';
  do
  {
    system("clear");
    int random = rand() % 2;

    if (random)
    {
      printf("Heads\n");
    }
    else
    {
      printf("Tails\n");
    }

    printf("\nToss again? (Y)es / (N)o ");
    scanf(" %c", &op);

  } while (toupper(op) != 'N');
}

void main(void)
{
  coin_toss();
}