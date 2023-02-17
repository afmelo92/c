#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool find_in_string(char c, char *arr) {
  while(*arr) {
    if(c == *arr) return true;
    arr++;
  }
  return false;
}


int word_count(char *string) {
  int len = strlen(string);
  int wc = 0;
  char non_words[] = " .,;\n\t";

  for (int i = 0; i < len; i++)
  {
    if(!find_in_string(string[i], non_words)) {
      while(i < len)
      {
        if(find_in_string(string[i], non_words)) {
          wc++;
          break;
        }
        i++;
      }
    }
  }

  return wc;
}

void main(void) {
  char word[] = "    An interesting string... to modify my, friend .";

  printf("Number of words: %d\n", word_count(word));
}