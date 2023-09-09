#include <stdio.h>
/**
 * main - Prints all possible different combinations of two digits,
 * separated by "," followed by a space,
 * followed by new line
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j > i)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i != 8 || j != 9)
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
