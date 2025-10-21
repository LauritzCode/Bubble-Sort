#include "sort.h"
#include <ctype.h>
#include <stddef.h>
#include <stdio.h>

int main(void) {

  // Input array size

  size_t size;

  printf("Choose array size: ");
  while (scanf("%zu", &size) != 1 || size == 0) {
    printf("Invalid size. Try again: ");
    int clear;
    while ((clear = getchar()) != '\n' && clear != EOF)
      ; // clears the buffer
  }

  int array1[size];
  char array2[size];

  for (size_t i = 0; i < size; i++) {
    while (1) {
      printf("Type the number for array[%zu]: ", i);
      if (scanf("%d", &array1[i]) == 1) {
        break;
      } else {
        printf("Invalid input. Please enter an integer.\n");
        int clear;
        while ((clear = getchar()) != '\n' && clear != EOF)
          ; // clear wrong input
      }
    }
  }

  printf("\nYour current int array is: ");

  for (size_t i = 0; i < size; i++) {
    printf("%d ", array1[i]);
  }

  printf("\nNow for your character array:\n");

  for (size_t i = 0; i < size; i++) {
    while (1) {
      printf("Type the character for array[%zu]: ", i);
      char temp;
      if (scanf(" %c", &temp) == 1 && isalpha((unsigned int)temp)) {
        array2[i] = temp;
        break;
      } else {
        printf("Invalid input. Please enter a letter.\n");
        int clear;
        while ((clear = getchar()) != '\n' && clear != EOF)
          ;
      }
    }
  }

  printf("Your current char array is: ");

  for (size_t i = 0; i < size; i++) {
    printf("%c ", array2[i]);
  }
  puts("");

  bubble_sort_char(array2, size, char_ascending);
  bubble_sort_int(array1, size, int_ascending);

  printf("Your sorted (ascending) char array is: ");

  for (size_t i = 0; i < size; i++) {
    printf("%c ", array2[i]);
  }
  puts("");

  printf("Your sorted (ascending) int array is: ");

  for (size_t i = 0; i < size; i++) {
    printf("%d ", array1[i]);
  }
}