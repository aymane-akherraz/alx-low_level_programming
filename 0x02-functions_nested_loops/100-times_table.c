#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: is the number of colones to be printed
*/
void print_times_table(int n)
{
	if (n > 0 && n <= 15)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if ((i * j) < 10)
					_putchar('0' + (i * j));
				else if ((i * j) < 100)
				{
					_putchar('0' + ((i * j) / 10));
					_putchar('0' + ((i * j) % 10));
				} else
				{
					_putchar('0' + (((i * j) / 100) % 10));
					_putchar('0' + (((i * j) / 10) % 10));
					_putchar('0' + ((i * j) % 10));
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					if ((i * j) < 10 && (i * (j + 1)) < 10)
					{
						_putchar(' ');
						_putchar(' ');
					} else if ((i * j) < 100 && (i * (j + 1)) < 100)
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	} else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
}
