#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 * @str: A pointer to the given string
 * Return: NULL if str = NULL or if insufficient memory was available,
 * otherwise a pointer to the duplicated string
*/

char *_strdup(char *str)
{
	char *d;
	int i, l;

	if (str != NULL)
	{
		l = 0;
		while (str[l] != '\0')
			l++;

		d = malloc(sizeof(char) * l);
		if (d != NULL)
		{
			for (i = 0; i < l; i++)
				d[i] = str[i];

			d[i] = '\0';
			return (d);
		}
	}
	return (NULL);
}
