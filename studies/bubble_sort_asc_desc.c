#include <stdio.h>
#include <string.h>
#include <ctype.h>

void uppercase_string(char *string) {
  while(*string) {
    *string = toupper(*string);
    string++;
  }
}

void bubble_sort(int *arr, int len, char *order) {
  int tmp;
  int length = strlen(order);
  char word[length];
  
  strcpy(word, order);

  uppercase_string(word);

  if(strcmp(word, "ASC") || strcmp(word, "DESC")){
    for (int i = 0; i < len; i++) {
      for (int j = 0; j < len; j++) {
        if(strcmp(word, "DESC")) {
          if(arr[i] < arr[j]) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
          }
        } else {
          if(arr[i] > arr[j]) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
          }
        }
      }
    }
  }
}

void main(void) {
  int array[] = {11, 323, 5, 74, 91, 1, 5, 99, 23, 55};

  bubble_sort(array, 10, "asc");
  print_array(array, 10);

}