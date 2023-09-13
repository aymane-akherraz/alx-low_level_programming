#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * The numbers are separated by comma, followed by a space
 * Return: Always 0 (Success)
*/
int main(void)
{
	long i = 3, a = 1, b = 2;
	int c = 2;

	printf("%ld", a);
	printf(", %ld", b);
	while (c < 50)
	{
		if (i == (a + b))
		{
			printf(", %ld, ", i);
			c++;
			a = b;
			b = i;
		}
		i++;
	}
	printf("\n");
	return (0);
}
