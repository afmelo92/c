/**
 * COUNTS THE NUMBER OF VOWELS IN A WORD
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool is_vowel(char letter) {
  char voewls[] = {'A', 'E', 'I', 'O', 'U'};
  
  for (int i = 0; i < 5; i++)
  {
    if(toupper(letter) == voewls[i]) return true;
  }

  return false;
}

int vowel_counter(char *word) {
  int len = strlen(word);
  int count = 0;

  for (int i = 0; i < len; i++)
  {
    if(is_vowel(word[i])) {
      count = count + 1;
    }
  }
  
  return count;
}

void main(void) {
  char op;
  char word[255];

  do
  {
    system("clear");
    printf("Insert word to check the number of vowels: ");
    scanf(" %s", word);
    printf("\n\nThere are %d vowels in the word %s\n\n", vowel_counter(word), word);
    printf("Wanna try again? (Y)es or (N)o: ");
    scanf(" %c", &op);
  } while (toupper(op) == 'Y');
  

  
}