#include "sort.h"
#include <stddef.h>

void bubble_sort_char(char arr[], size_t size,
                      bool (*pair_is_in_order)(char a, char b)) {

  for (size_t pass = 0; pass < size; pass++) {
    for (size_t i = 0; i < size - 1; i++) {
      if (pair_is_in_order(arr[i], arr[i + 1])) {
        char_swap(&arr[i], &arr[i + 1]);
      }
    }
  }
}

void bubble_sort_int(int arr[], size_t size,
                     bool (*pair_is_in_order)(int a, int b)) {
  for (size_t pass = 0; pass < size; pass++) {
    for (size_t i = 0; i < size - 1; i++) {
      if (pair_is_in_order(arr[i], arr[i + 1])) {
        int_swap(&arr[i], &arr[i + 1]);
      }
    }
  }
}

void int_swap(int *aPtr, int *bPtr) {

  int hold = *aPtr;
  *aPtr = *bPtr;
  *bPtr = hold;
}

void char_swap(char *aPtr, char *bPtr) {

  char hold = *aPtr;
  *aPtr = *bPtr;
  *bPtr = hold;
}

bool int_ascending(int a, int b) {
  // swap if b is less than a
  return b < a;
}

bool int_descending(int a, int b) {
  // swap if a is less than b
  return b > a;
}

bool char_ascending(char a, char b) {
  // swap if b is less than a
  return b < a;
}

bool char_descending(char a, char b) {
  // swap if a is less than b
  return b > a;
}