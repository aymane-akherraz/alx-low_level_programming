#include <stdio.h>
/**
 * main - Prints all possible different combinations of two two-digit,
 * separated by "," followed by a space,
 * followed by new line
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (j > i)
			{
				putchar('0' + (i / 10));
				putchar('0' + (i % 10));
				putchar(' ');
				putchar('0' + (j / 10));
				putchar('0' + (j % 10));
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
