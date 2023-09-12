#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: is the number to be checked in order to get the last digit
 * Return: The value of the last digit
*/
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n = -n;

	l = n % 10;

	if (l < 0)
		l = -l;

	_putchar('0' + l);
	return (l);
}
