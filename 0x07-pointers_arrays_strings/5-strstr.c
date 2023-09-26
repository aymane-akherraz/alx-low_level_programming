/**
 * _strstr - locates a substring.
 * @haystack: This is the main C string to be scanned.
 * @needle: This is the small string to be searched with-in haystack string.
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			k = i + 1;
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (haystack[k] == needle[j])
				{
					k++;
					continue;
				}
				else
					break;
			}
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
	}
	return (0);
}
