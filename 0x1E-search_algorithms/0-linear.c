#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1 if
 * the value is not present in array or if array is NULL
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	i = 0;
	while (i < size)
	{
		_puts("Value checked array[");
		print_nb(i);
		_puts("] = [");
		print_nb(array[i]);
		_puts("]\n");

		if (array[i] == value)
			return ((int)i);
		i++;
	}
	return (-1);
}
/**
 * _putchar - Prints a character to stdout
 * @c: the character to print
 *
 * Return: Nothing
*/
void _putchar(char c)
{
	write(1, &c, 1);
}
/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: A pointer to the given string
*/
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*(str++));
}
/**
 * print_nb - Prints a number
 * @nb: the number to print
 *
 * Return: Nothing
*/
void print_nb(int nb)
{
	int r;
	char c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb < 10)
	{
		c = ('0' + nb);
		write(1, &c, 1);
		return;
	}
	r = nb / 10;
	if (r)
		print_nb(r);
	c = '0' + (nb % 10);
	write(1, &c, 1);
}
