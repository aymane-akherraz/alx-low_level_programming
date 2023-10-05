#include <stdlib.h>

void fill_arr(char *str, char **s, int h, int l);

/**
 * strtow - Splits a string into words
 * @str: A pointer to the given string
 * Return: NULL if str == NULL or str == "" or if it fails,
 * otherwise a pointer to an array of strings (words)
*/

char **strtow(char *str)
{
	char **s;
	int i, j, l, h, w;

	l = 0;
	while (str[l] != '\0')
		l++;

	if (str == NULL || l == 0 || (*str == ' ' && l == 1))
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == '\0')
			return (NULL);
		if (str[i] != ' ')
			break;
		continue;
	}

	h = 0;
	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (str[i - 1] > ' ' && str[i - 1] <= '~')
				h++;
		}
	}
	s = malloc(sizeof(char *) * (h + 1));

	if (s != NULL)
	{
		w = 0;
		j = 0;
		for (i = 0; i <= l; i++)
		{

			if (str[i] > ' ' && str[i] <= '~')
				w++;
			if (str[i] == ' ' || str[i] == '\0')
			{
				if (str[i - 1] > ' ' && str[i - 1] <= '~')
				{
					s[j] = malloc(sizeof(char) * (w + 1));
					j++;
				}
			}
		}
		fill_arr(str, s, h, l);
		return (s);
	}
	return (NULL);
}

/**
 * fill_arr - Fills the array s with words
 * @str: A pointer to the given string
 * @s: A pointer to an array of strings (words)
 * @h: the height of the array
 * @l: the length of the given string
 * Return: Nothing
*/

void fill_arr(char *str, char **s, int h, int l)
{
	int k = 0, i = 0, j;

	while (i < h)
	{
		for (j = 0; j <= l; j++)
		{
			if (str[j] > ' ' && str[j] <= '~')
			{
				s[i][k] = str[j];
				k++;
			}
			if (str[j] == ' ' || str[j] == '\0')
			{
				if (str[j - 1] > ' ' && str[j - 1] <= '~')
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
}
