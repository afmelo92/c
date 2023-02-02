/**
 * CHECK IF A WORD IS A PALINDROME (SAME WORD BACKWARD)
*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_palindrome(char *word) {
    int len = strlen(word);

    for (int i = 0; i < (len/2); i++)
    {
        if(word[i] != word[len-(i+1)]) {
            return false;
        }
    }
    return true;
}

void main(void) {
  char word1[] = "andre";
  char word2[] = "abcddcba";
  char word3[] = "abcdedcba";
  char word4[] = "xyzaadcba";

  printf("%s is palindrome: %s\n", word1, is_palindrome(word1) ? "true" : "false");
  printf("%s is palindrome: %s\n", word2, is_palindrome(word2) ? "true" : "false");
  printf("%s is palindrome: %s\n", word3, is_palindrome(word3) ? "true" : "false");
  printf("%s is palindrome: %s\n", word4, is_palindrome(word4) ? "true" : "false");

}