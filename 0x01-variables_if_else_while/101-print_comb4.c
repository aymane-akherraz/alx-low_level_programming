#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits,
 * separated by "," followed by a space,
 * followed by new line
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int j;
	int b;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (b = 0; b < 10; b++)
			{
				if (b > j && j > i)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + b);
					if (i != 7 || j != 8 || b != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
