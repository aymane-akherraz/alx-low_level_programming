/**
 * _strcmp - Compares two strings.
 * @s1: The first given string
 * @s2: The second given string
 * Return: 0 if s1 and s2 are identical,
 * less than 0 if s1 is less than s2,
 * greater than 0 if s1 is greater than s2.
*/

int _strcmp(char *s1, char *s2)
{
	int i, j;

	j = 0;
	while (s2[j] != '\0')
		j++;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}
	if (j > i)
		return (s1[i] - s2[i]);
	return (0);
}
