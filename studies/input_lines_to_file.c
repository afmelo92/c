#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main(void)
{
  char buffer[BUFFER_SIZE];
  bool read_more = true;
  FILE *fh;

  fh = fopen("./output/test.txt", "w");

  if (fh == NULL)
  {
    printf("Error opening file.\n");
    exit(1);
  }

  while (read_more)
  {
    fgets(buffer, BUFFER_SIZE, stdin);

    printf("%s", buffer);

    if (strcmp(buffer, "quit\n") == 0)
    {
      read_more = false;
    }
    else
    {
      fputs(buffer, fh);
    }
  }

  fclose(fh);

  return 0;
}