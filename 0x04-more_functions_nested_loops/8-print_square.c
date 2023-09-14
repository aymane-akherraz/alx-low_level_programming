#include "main.h"
/**
 * print_square - Prints a square, followed by a new line.
 * @size: is the size of the square
*/

void print_square(int size)
{
	if (size > 0)
	{
		int i, j = size + 1;

		while (--j)
		{
			for (i = 0; i < size; i++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
