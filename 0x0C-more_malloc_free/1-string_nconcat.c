#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: A pointer to the first given string
 * @s2: A pointer to the second given string
 * n: number of bytes of s2 to be concatenated with s1
 * Return: A pointer to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated otherwise NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int l1 = 0, l2 = 0, i, j;

	if (s1 != NULL)
	{
		while (s1[l1] != '\0')
			l1++;
	}
	if (s2 != NULL)
	{
		while (s2[l2] != '\0')
			l2++;
	}
	if (n >= l2)
		n = l2;
	s = malloc(sizeof(char) * (l1 + n + 1));

	if (s != NULL)
	{
		for (i = 0; i < l1; i++)
			s[i] = s1[i];


		for (j = 0; j < n; j++)
		{
			s[i] = s2[j];
			i++;
		}
		s[i] = '\0';
		return (s);
	}
	return (NULL);
}
