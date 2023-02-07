/**
 * REMOVES CHAR OCCURRENCE FROM STRING
*/
#include <stdio.h>

void remove_occurrences(char word, char *string) {
  int i = 0;
  while(string[i] != '\0') {
    if(string[i] == word) {
      int j = i;
      while(string[j] != '\0') {
        string[j] = string[j+1];
        j++;
      }
    } else {
      i++;
    }
  }
}


void main(void) {
  char string[] = "A simple string sss thatss contains as specsssssific strssssssing strsssingx";
  char word = 's';

  printf("String before: %s\n", string);
  remove_occurrences(word, string);
  printf("String after: %s\n", string);

}