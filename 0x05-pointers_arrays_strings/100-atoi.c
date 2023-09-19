#include "main.h"
/**
 * _atoi - Convert a string to an integer.
 * @s: A pointer to the given string
 * Return: An integer if there's one or more, 0 otherwise
*/

int _atoi(char *s)
{
	int i, j, n = 0, c = 0, no_dgs = 0, dg;

	for (i = 0; s[i] != '\0'; i++)
	{
		dg = 0;

		if (s[i] == '-')
			c++;

		else if (s[i] >= '0' && s[i] <= '9')
		{
			no_dgs = 1;
			dg = s[i] - '0';

			if (c % 2 != 0)
				dg = -dg;

			n = n * 10 + dg;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		} else
			no_dgs == 0;
	}
	if (no_dgs == 0)
		return (0);
	else
		return (n);
}
