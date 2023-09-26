/**
 * _strstr - locates a substring.
 * @haystack: This is the main C string to be scanned.
 * @needle: This is the small string to be searched with-in haystack string.
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
	char *one = haystack;
	char *two = needle;

	while (*one == *two && *two != '\0')
	{
		one++;
		two++;
	}

if (*two == '\0')
return (haystack);
return (needle);
}
return (NULL);
}	
