#include <stdio.h>
/**
 * main - Prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded), followed by a new line.
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, s;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			s += i;
		}
	}
	printf("%d\n", s);
	return (0);
}
