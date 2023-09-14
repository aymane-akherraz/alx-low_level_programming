#include <stdio.h>
/**
 * main - Finds and prints the largest prime factor of the number 612852475143,
 * followed by a new line.
 * Return: Always 0.
*/
int main(void)
{
	long i, n;

	n = 612852475143;
	for (i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
			n = n / i;
	}
	printf("%ld\n", n);
	return (0);
}
