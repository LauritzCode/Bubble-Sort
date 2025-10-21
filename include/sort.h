#include <stdbool.h>
#include <stddef.h>

void bubble_sort_char(char arr[], size_t size,
                      bool (*pair_is_in_order)(char a, char b));
void bubble_sort_int(int arr[], size_t size,
                     bool (*pair_is_in_order)(int a, int b));

void int_swap(int *aPtr, int *bPtr);
void char_swap(char *aPtr, char *bPtr);

bool int_ascending(int a, int b);
bool char_ascending(char a, char b);

bool int_descending(int a, int b);
bool char_descending(char a, char b);