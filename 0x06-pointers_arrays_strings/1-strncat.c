/**
 * _strncat - Concatenates two strings, except that
 * it will use at most n bytes from src
 * @dest: A pointer to the first string
 * @src: A pointer to the second string
 * @n: The number of characters that we'll be concatenated
 * Return: A pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	i = 0;
	while (dest[i] != '\0')
		i++;

	k = 0;
	while (src[k] != '\0')
		k++;

	if (n >= k)
		n = k;

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
