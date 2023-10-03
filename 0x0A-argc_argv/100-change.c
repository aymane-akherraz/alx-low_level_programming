#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change for
 * an amount of money.
 * @argc: The number of arguments passed
 * @argv: A pointer array which points to each argument passed to the program
 * Return: 1 if the number of arguments passed is not exactly 1 otherwise 0
*/

int main(int argc, char *argv[])
{
	int i, r = 0, m;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	m = atoi(argv[1]);

	if (m < 0)
		printf("%d\n", 0);
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (m >= c[i])
			{
				while (m >= c[i])
				{
					m -= c[i];
					r++;
				}
				if (m == 0)
					break;
			}
			else
				continue;
		}
		printf("%d\n", r);
	}
	return (0);
}
