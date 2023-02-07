/**
 * INFINITE INPUT BUFFER
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(void) {
  int size = 2, total = 0, i = 0, input;
  int *buffer = malloc(sizeof(int)*size);

  while(true) {
    if(i == size) {
      size *= 2;
      buffer = realloc(buffer, sizeof(int)*size);
    }
    printf("Insert data (-1 to quit): ");
    scanf(" %d", &input);
    if(input == -1) {
      buffer[i+1] = NULL;
      break;
    } else buffer[i] = input;
    i++;
  }
  
  i = 0;
  while(buffer[i] != NULL)
  {
    printf("data[%d]: %d\n", i, buffer[i]);
    total += buffer[i];
    i++;
  }
  
  printf("Average: %.2f\n", ((float)total/i));
  printf("Buffer size: %d\n", size);

}