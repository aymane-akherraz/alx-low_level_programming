#include "main.h"
/**
 * print_number - Prints an integer.
 * @n : The given integer
*/

void print_number(int n)
{
	unsigned int t;

	if (n < 0)
	{
		t = -n;
		_putchar('-');
	}
	else
		t = n;

	if (n != 0)
	{
		if (t / 10 != 0)
			print_number(t / 10);

		_putchar((t % 10) + '0');
	}
	else
		_putchar('0');
}
