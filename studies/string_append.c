/**
 * CONCAT TWO STRINGS WITH DYNAMIC MEMORY ALLOC
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_append(char *s1, char *s2) {
  int s1len = strlen(s1);
  int s2len = strlen(s2);
  int new_length = s1len + s2len + 1;

  char *new_word = calloc(new_length, sizeof(char));

  for (int i = 0; i < s1len; i++)
  {
    new_word[i] = s1[i];
    printf("s1[%d]: %c\n", i, s1[i]);
  }

  for (int i = 0; i < s2len; i++)
  {
    new_word[i+s1len] = s2[i];
    printf("s2[%d]: %c\n", i, s2[i]);

  }
  
  new_word[new_length - 1] = '\0';

  return new_word;
}

void main(void) {
  char op;
  char word1[] = "Alo amigos";
  char word2[] = " do bonde da string!";

  printf("New word: %s\n", string_append(word1, word2));
}