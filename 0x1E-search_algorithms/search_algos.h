#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <unistd.h>

void _putchar(char c);
void _puts(char *str);
void print_nb(int nb);

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
#endif
