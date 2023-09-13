#include <stdio.h>
/**
 * main - Prints the sum of the even-valued terms,
 * followed by a new line.
 * Return: Always 0 (Success)
*/
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int s = 0;

	while (b < 4000000)
	{
		b += a;
		a = b - a;

		if (b % 2 == 0)
			s += b;
	}
	printf("%ld\n", s);
	return (0);
}
