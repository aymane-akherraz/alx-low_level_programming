/**
 * cap_string - Capitalizes all words of a string.
 * @s: The given string
 * Return: s, the resulted string
*/
char *cap_string(char *s)
{
	int i, j, len;
	int a [] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	len = sizeof(a) / sizeof(int);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] -= 32;
			else
			{
				for (j = 0; j < len; j++)
				{
					if (s[i - 1] == a[j])
						s[i] -= 32;
				}
			}
		}
	}
	return (s);
}
