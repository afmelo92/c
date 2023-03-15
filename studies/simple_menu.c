#include <stdio.h>
#include <stdlib.h>

void menu()
{
  int selected = -1;

  do
  {
    printf("========= Menu =========\n");
    printf("Choose an option by the number or -1 to quit\n\n");
    printf("(1) Program 1\n");
    printf("(2) Program 2\n");
    printf("(3) Program 3\n");
    printf("(4) Program 4\n");
    printf("(5) Program 5\n");
    printf("Insert the number selection: ");
    scanf(" %d", &selected);
    system("clear");
    switch (selected)
    {
    case 1:
      printf("\n\n\nRunning program 1...\n\n\n");
      break;
    case 2:
      printf("\n\n\nRunning program 2...\n\n\n");
      break;
    case 3:
      printf("\n\n\nRunning program 3...\n\n\n");
      break;
    case 4:
      printf("\n\n\nRunning program 4...\n\n\n");
      break;
    case 5:
      printf("\n\n\nRunning program 5...\n\n\n");
      break;
    default:
      printf("\n\n\nSelect the menu program number\n\n\n");
      break;
    }

  } while (selected != -1);
  system("clear");
  printf("BYE!\n\n");
}

void main(void)
{
  menu();
}