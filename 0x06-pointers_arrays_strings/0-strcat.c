/**
 * _strcat - Concatenates two strings.
 * @dest: A pointer to the first string
 * @src: A pointer to the second string
 * Return: A pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
