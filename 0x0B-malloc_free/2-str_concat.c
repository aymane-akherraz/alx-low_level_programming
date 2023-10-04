#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: A pointer to the first given string
 * @s2: A pointer to the second given string
 * Return: NULL on failure otherwise pointer to a newly allocated space
 * in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
*/

char *str_concat(char *s1, char *s2)
{
	int l1, l2, i, j;
	char *r;

	l1 = 0;
	if (s1 != NULL)
	{
		while (s1[l1] != '\0')
			l1++;
	}
	l2 = 0;
	if (s2 != NULL)
	{
		while (s2[l2] != '\0')
			l2++;
	}

	r = malloc(sizeof(char) * (l1 + l2 + 1));
	if (r != NULL)
	{
		for (i = 0; i < l1; i++)
			r[i] = s1[i];

		for (j = 0; j < l2; j++)
		{
			r[i] = s2[j];
			i++;
		}
		r[i] = '\0';
		return (r);
	}
	return (NULL);
}
