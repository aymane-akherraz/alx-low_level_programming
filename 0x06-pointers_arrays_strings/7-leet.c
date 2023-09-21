/**
 * leet - Encodes a string into 1337.
 * @s: the given string
 * Return: s, the resulted string
*/

char *leet(char *s)
{
	int i, j;

	char l[] = {'a', 'e', 'o', 't', 'l'};
	char v[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == l[j] || s[i] == (l[j] - 32))
			{
				s[i] = v[j];
				break;
			}
		}
	}
	return (s);
}
