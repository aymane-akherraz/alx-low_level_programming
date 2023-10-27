#include "main.h"
void get_decimal(unsigned long int n);
void divide_decimal(unsigned long int n, unsigned long int q);

/**
 * print_binary - Prints the binary representation of a number
 * @n: the given number
*/
void print_binary(unsigned long int n)
{
	get_decimal(n);
}
/**
 * get_decimal - gets the number and pass it to divide_decimal
 * @n: the given number
*/
void get_decimal(unsigned long int n)
{
	if (n >= 2)
		divide_decimal(n, (n >> 1));
	else
		_putchar('0' + n);

}
/**
 * divide_decimal - Converts n to binary number and prints each digit to
 * the screen
 * @n: the given number
 * @q: the quotient of n by 2
*/
void divide_decimal(unsigned long int n, unsigned long int q)
{
	unsigned int r;

	r = n - (q * 2);
	if (n >= 2)
	{
		n = n >> 1;
		divide_decimal(n, (n >> 1));
	}
	_putchar('0' + r);
}
