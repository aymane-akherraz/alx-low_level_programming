#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * The numbers are separated by comma, followed by a space
 * Return: Always 0 (Success)
*/
int main(void)
{
	double a = 1, b = 2;
	int c = 2;

	printf("%0.f", a);
	printf(", %0.f", b);
	while (c < 98)
	{
		b += a;
		a = b - a;
		printf(", %0.f", b);
		c++;
	}
	printf("\n");
	return (0);
}
