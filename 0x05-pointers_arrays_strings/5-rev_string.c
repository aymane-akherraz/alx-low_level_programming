#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: A pointer to the given string
*/

void rev_string(char *s)
{
	int j = 0, len = 0, i;
	char tmp;

	while (s[j] != '\0')
		j++;

	len = j - 1;

	for (i = 0; i < (j / 2); i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len--] = tmp;
	}
}
