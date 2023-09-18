/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to the given string
 * Return: The length of the given string.
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

