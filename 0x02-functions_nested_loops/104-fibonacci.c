#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * The numbers are separated by comma, followed by a space
 * Return: Always 0 (Success)
*/
int main(void)
{
	unsigned long int a = 1, b = 2;
	int c = 2;

	printf("%lu", a);
	printf(", %lu", b);
	while (c < 98)
	{
		b += a;
		a = b - a;
		printf(", %lu", b);
		c++;
	}
	printf("\n");
	return (0);
}
