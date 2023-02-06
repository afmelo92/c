/**
 * INVERTS LETTER CASE OF A STRING
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void invert_case(char *s) {
  int len = strlen(s);

  for (int i = 0; i < len; i++)
  {
    if(isupper(s[i])) {
      s[i] = tolower(s[i]);
    } else {
      s[i] = toupper(s[i]);
    }
  }
  
  
}

void main(void) {
  char s[] = "HELLO amigos da ViLa";

  printf("Original: %s\n", s);
  invert_case(s);
  printf("Inverted: %s\n", s);
}