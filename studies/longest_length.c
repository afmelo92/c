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

int longest_length(char *string) {
  int len = strlen(string);
  int count = 0, longest = 0;
  char non_words[] = " .,;\n\t";

  for (int i = 0; i < len; i++)
  {

    if(!find_in_string(string[i], non_words)) {
      while(i < len)
      {
        if(find_in_string(string[i], non_words)) {
          if(count > longest) {
            longest = count;
          }
          count = 0;
          break;
        }
        i++;
        count++;
      }
    }
  }
  return longest;
}

void main(void) {
  char word[] = "    An interesting  string... to modify my, friend .                  andtotestifalongstringatthefinal  ";

  printf("Longest word length: %d\n", longest_length(word));
}