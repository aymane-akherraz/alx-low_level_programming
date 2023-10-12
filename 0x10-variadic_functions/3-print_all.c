#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: nothing
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *sep = "";

	   print_f fts[] = {
		{"c", pt_char},
		{"i", pt_int},
		{"f", pt_float},
		{"s", pt_str},
		{NULL, NULL}
	};
	va_start(args, format);

	i = 0;
	while (format[i] && format)
	{
		j = 0;
		while (fts[j].fs)
		{
			if (format[i] == *(fts[j].fs))
			{
				fts[j].f(args, sep);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
 * pt_char - prints a char
 * @a: an argument pointer variable of type va_list
 * @sep: the string to be printed between numbers
*/
void pt_char(va_list a, char *sep)
{
	printf("%s%c", sep, va_arg(a, int));
}
/**
 * pt_int - prints a integer
 * @a: an argument pointer variable of type va_list
 * @sep: the string to be printed between numbers
*/
void pt_int(va_list a, char *sep)
{
	printf("%s%i", sep, va_arg(a, int));
}
/**
 * pt_float - prints a float
 * @a: an argument pointer variable of type va_list
 * @sep: the string to be printed between numbers
*/
void pt_float(va_list a, char *sep)
{
	printf("%s%f", sep, va_arg(a, double));
}
/**
 * pt_str - prints a string
 * @a: an argument pointer variable of type va_list
 * @sep: the string to be printed between numbers
*/
void pt_str(va_list a, char *sep)
{
	char *str = va_arg(a, char *);

	if (str == NULL)
	{
		printf("%s%s", sep, "(nil)");
		return;
	}

	printf("%s%s", sep, str);
}
