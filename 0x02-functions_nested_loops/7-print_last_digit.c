#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: is the number to be checked in order to get the last digit
 * Return: The value of the last digit
*/
int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar('0' + (-n % 10));
		return (-n % 10);
	}
	_putchar('0' + (n % 10));
	return (n % 10);
}
