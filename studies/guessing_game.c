#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void guessing_game()
{
  bool game_over = false;
  srand(time(NULL));
  int random_number = rand() % 100;
  int guess = -1;

  printf("Guessing game! I've randomed a number between 0 and 100. Guess it!\n\n");

  while (!game_over)
  {

    printf("Insert an integer number: ");
    scanf(" %d", &guess);

    if (guess == random_number)
    {
      printf("Nailed it!\n");
      game_over = true;
    }
    else if (guess > random_number)
    {
      printf("Lower!\n");
    }
    else
    {
      printf("Higher!\n");
    }
  }
}

void main(void)
{
  guessing_game();
}