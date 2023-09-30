int cmp(char *s1, char *s2, int cs);

/**
 * wildcmp - Compares two strings
 * @s1: A pointer to the first string
 * @s2: A pointer to the second string
 * Return: 1 if the strings can be considered identical, otherwise return 0
*/

int wildcmp(char *s1, char *s2)
{
	int cs = 0;

	return (cmp(s1, s2, cs));
}

/**
 * cmp - checks if two string are identical
 * @s1: A pointer to the first string
 * @s2: A pointer to the second string
 * @cs: a boolean that indicates if a string contains at least one star
 * Return: 1 if the strings can be considered identical, otherwise return 0
*/

int cmp(char *s1, char *s2, int cs)
{
	if (*s1 != *s2)
	{
		if (*s2 == '*')
		{
			cs = 1;
			if (*(s2 + 1) == '\0')
				return (1);

			return (cmp(s1, (s2 + 1), cs));
		}
		if (cs == 1 && *s1 != '\0' && *s2 != '\0')
			return (cmp((s1 + 1), s2, cs));

		return (0);
	}
	else
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (1);

		return (cmp((s1 + 1), (s2 + 1), cs));
	}
}
