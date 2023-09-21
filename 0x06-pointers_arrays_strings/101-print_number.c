#include "main.h"
/**
 * print_number - Prints an integer.
 * @n : The given integer
*/

void print_number(int n)
{
	unsigned int d;

	if (n < 0)
	{
		_putchar('-');
		d = -n;
	}
	else
		d = n;

	if (d / 10 != 0)
		print_number(d / 10);

	_putchar((d % 10) + '0');
}
