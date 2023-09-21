/**
 * _strncpy - Copies n characters from src to dest.
 * @dest: A pointer to the first string
 * @src: A pointer to the second string
 * @n: The number of chars to be copied from src
 * Return: A pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j, k;

	i = 0;
	while (src[i] != '\0')
		i++;

	k = 0;
	while (dest[k] != '\0')
		k++;

	if (n <= i)
	{
		for (j = 0; j < n; j++)
			dest[j] = src[j];

		dest[k] = '\0';
	}
	else
	{
		for (j = 0; j < i; j++)
			dest[j] = src[j];

		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (dest);
}
