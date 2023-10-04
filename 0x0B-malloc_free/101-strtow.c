#include <stdlib.h>
void fill_arr(char *str, char **s, int h);

/**
 * strtow - Splits a string into words
 * @str: A pointer to the given string
 * Return: NULL if str == NULL or str == "" or if it fails,
 * otherwise a pointer to an array of strings (words)
*/

char **strtow(char *str)
{
	char **s;
	int i, j, h, w;

	if (str == NULL)
		return (NULL);

	h = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && (str[i + 1] > ' ' && str[i + 1] <= '~'))
			h++;
	}
	s = malloc(sizeof(char *) * (h + 1));
	if (s != NULL)
	{
		w = 0;
		j = 0;
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] > ' ' && str[i] <= '~')
				w++;
			if (str[i] == ' ' && (str[i - 1] > ' ' && str[i - 1] <= '~'))
			{
				s[j] = malloc(sizeof(char) * (w + 1));
				j++;
			}
		}
		fill_arr(str, s, h);
		return (s);
	}
	return (NULL);
}

/**
 * fill_arr - Fills the array s with words
 * @str: A pointer to the given string
 * @s: A pointer to an array of strings (words)
 * @h: the height of the array
 *
 * Return: Nothing
*/

void fill_arr(char *str, char **s, int h)
{
	int k = 0, i = 0, j;

	while (i < h)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (str[j] > ' ' && str[j] <= '~')
			{
				s[i][k] = str[j];
				k++;
			}
			if (str[j] == ' ' && (str[j - 1] > ' ' && str[j - 1] <= '~'))
			{
				s[i][k] = '\0';
				k = 0;
				i++;
				if (i == h)
					s[i] = NULL;
			}
		}
	}
}
