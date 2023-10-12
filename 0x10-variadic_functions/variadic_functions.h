#ifndef VARIADIC_FUNCTIONS_H_
#define VARIADIC_FUNCTIONS_H_

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - Struct print
 *
 * @fs: The format specifier
 * @f: The function associated
*/
typedef struct print
{
	char *fs;
	void (*f)(va_list a, char *sep);
} print_f;

void pt_char(va_list a, char *sep);
void pt_int(va_list a, char *sep);
void pt_float(va_list a, char *sep);
void pt_str(va_list a, char *sep);

#endif
