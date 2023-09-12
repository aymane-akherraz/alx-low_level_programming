#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: is the number from where we'll start printing
*/
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 97; i--)
		{
			printf("%d", i);
			if (i > 98)
				printf("%s", ", ");
		}
	}
	else
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i < 98)
				printf("%s", ", ");
		}
	}
	printf("%c", '\n');
}
