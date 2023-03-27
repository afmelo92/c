#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main(void)
{
  FILE *fp;
  char buffer[BUFFER_SIZE];
  double current, max;
  int numbers = 0;

  fp = fopen("./input/numbers.txt", "r");

  if (fp == NULL)
  {
    printf("Error opening file.\n");
    exit(1);
  }

  while ((fgets(buffer, BUFFER_SIZE, fp) != NULL))
  {
    current = atof(buffer);

    if (numbers == 0)
      max = current;
    else if (current > max)
      max = current;

    numbers++;
  }

  fclose(fp);

  printf("max: %.2f\n", max);

  return 0;
}