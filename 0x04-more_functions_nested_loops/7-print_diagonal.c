#include "main.h"
/**
 * print_diagonal - Draws a diagonal line in the terminal,
 * followed by a new line.
 * @n: is the number of times the character \ should be printed
*/

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
