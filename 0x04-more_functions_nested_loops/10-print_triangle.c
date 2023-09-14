#include "main.h"
/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 * If size is 0 or less, the function will print only a new line
*/
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, k;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < ((size - 1) - i); j++)
				_putchar(' ');

			for (k = size; k > ((size - 1) - i); k--)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
