#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of your program
 * @ac: The number of arguments passed
 * @av: A pointer array which points to each argument passed to the program
 * Return: NULL if ac equals 0 or av equals NULL,
 * a pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	int i, j, l, k;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	l = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			l++;
		l++;
	}

	s = malloc(sizeof(char) * (l + 1));
	if (s != NULL)
	{
		for (i = 0; i < l; i++)
		{
			for (j = 0; j < ac; j++)
			{
				for (k = 0; av[j][k] != '\0'; k++)
				{
					s[i] = av[j][k];
					i++;
				}
				s[i] = '\n';
				i++;
			}
		}
		s[i] = '\0';
		return (s);
	}
	return (NULL);
}
