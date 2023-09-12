#include <unistd.h>
/**
 * _abs - Computes the absolute value of an integer.
 * @n: is the number to be checked
 * Return: -n if n is negative, n otherwise
*/
int _abs(int n)
{
	if (n < 0)
		return (-n);

	return (n);
}
