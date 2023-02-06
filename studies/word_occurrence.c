/**
 * CHECKS FOR THE NUMBER OF OCCURRENCES OF A WORD INSIDE A STRING. STRICT AND NON STRICT VERSION.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>

int word_occurrence_strict(char *word, char *string) {
  int slen = strlen(string);
  int wlen = strlen(word);
  int word_counter = 0;
  int occurrence_counter = 0;

  for (int i = 0; i < slen; i++)
  {
    
    if(string[i] != word[word_counter]) {
      word_counter = 0;
    } else {
      word_counter++;

      if((word_counter == (wlen)) && ((string[i+1] == ' ') || string[i+1] == '\0')) {
        occurrence_counter++;
        word_counter = 0;
      }
    }
  }
  
  return occurrence_counter;
}


int word_occurrence(char *word, char *string) {
  int slen = strlen(string);
  int wlen = strlen(word);
  int occurrence_counter = 0;

  for (int i = 0; i < (slen - wlen + 1); i++)
  {
    bool word_found = true;
    int j = 0;
    while(j < wlen) {
      if(tolower(word[j]) != tolower(string[i + j])) {
        word_found = false;
        break;
      }
      j++;
    }
    if(word_found) occurrence_counter++;
  }
  
  return occurrence_counter;
}


void main(void) {
  char string[] = "A simple string that contains a specific string stringx";
  char word[] = "string";

  printf("[Strict]The word '%s' appears %d time(s) in the string -> '%s'\n", word, word_occurrence_strict(word, string), string);
  printf("The word '%s' appears %d time(s) in the string -> '%s'\n", word, word_occurrence(word, string), string);
  
}