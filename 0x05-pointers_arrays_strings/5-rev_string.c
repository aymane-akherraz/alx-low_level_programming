#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: A pointer to the given string
*/

void rev_string(char *s)
{
	int j = 0, len = 0, i = 0;
	char r_str[len + 1];

	while (s[j] != '\0')
		j++;

	len = j;

	while (j--)
	{
		r_str[i] = s[j];
		i++;
		if (j == 0)
			r_str[i] = '\0';
	}

	for (i = 0; i <= len; i++)
		s[i] = r_str[i];
}
