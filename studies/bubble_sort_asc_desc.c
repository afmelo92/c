#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void uppercase_string(char *string) {
  while(*string) {
    *string = toupper(*string);
    string++;
  }
}

void bubble_sort(int *arr, int len, char *order) {
  int length = strlen(order);
  int i = 0;
  bool swapped = false;
  char word[length];
  
  strcpy(word, order);
  uppercase_string(word);

  if(strcmp(word, "ASC") || strcmp(word, "DESC")){
    do {
      swapped = false;
      for (int j = 0; j < (len - 1 - i); j++)
      {
        if(strcmp(word, "ASC")) {
          if(arr[j] < arr[j+1]) {
            int aux = arr[j];
            arr[j] = arr[j + 1];
            arr[j+1] = aux;
            swapped = true;
          }
        } else {
          if(arr[j] > arr[j+1]) {
            int aux = arr[j];
            arr[j] = arr[j + 1];
            arr[j+1] = aux;
            swapped = true;
          }
        }
      }
      i++;
    } while (swapped);
  }
}

void main(void) {
  int array[] = {11, 323, 5, 74, 91, 1, 5, 99, 23, 55};

  bubble_sort(array, 10, "asc");
  print_array(array, 10);

}