#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * The numbers are separated by comma, followed by a space
 * Return: Always 0 (Success)
*/
int main(void)
{
	long long int i = 3;
	long long int a = 1;
	long long int b = 2;
	int c = 2;

	printf("%lld, ", a);
	printf("%lld, ", b);
	while (c < 50)
	{
		if (i == (a + b))
		{
			if (c == 49)
				printf("%lld", i);
			else
				printf("%lld, ", i);
			c++;
			a = b;
			b = i;
		}
		i++;
	}
	printf("%c", '\n');
	return (0);
}
