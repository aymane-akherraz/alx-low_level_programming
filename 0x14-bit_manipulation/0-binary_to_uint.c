#include "main.h"
int _isdigit(int c);
unsigned int _pow(unsigned int n, unsigned int p);

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i, j = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (!(_isdigit(b[i])))
			return (0);
	}

	for (i = i - 1; i >= 0; i--)
	{
		if (b[j] == '1')
			n += _pow(2, i);
		j++;
		continue;
	}
	return (n);
}
/**
 * _pow - Raises n to the power of p
 * @n: the number to raise
 * @p: the given power
 *
 * Return: n to the power of p
*/
unsigned int _pow(unsigned int n, unsigned int p)
{
	unsigned int r = 1, i;

	if (p == 0)
		return (r);

	for (i = 0; i < p; i++)
		r *= n;

	return (r);
}

/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: is the input to be checked
 * Return: 1 if c is a digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
