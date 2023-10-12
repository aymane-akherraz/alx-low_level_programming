#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: the number of parameters passed to the function
 *
 * Return: the sum of all its parameters or 0 if n equals 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum, i;

	if (n == 0)
		return (0);

	va_start(args, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
