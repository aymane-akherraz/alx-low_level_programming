#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of strings passed to the function
 *
 * Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	if (n <= 0)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i < (n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
