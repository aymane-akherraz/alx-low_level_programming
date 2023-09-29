int _strlen_recursion(char *s);
int test_str(char *s, char *r, int l, char *os);

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not
 * @s: A pointer to the given string
 * Return: 1 if a string is a palindrome and 0 if not
*/

int is_palindrome(char *s)
{
	int len;

	if (*s == '\0')
		return (1);

	len = _strlen_recursion(s);

	return (test_str(s, (s + (len - 1)), len, s));
}

/**
 * test_str - Checks if s is palindrome or not
 * @s: A pointer to the given string
 * @r: Another pointer to the given string
 * @l: The length of the given string
 * @os: the orginal string
 * Return: 1 if a string is a palindrome and 0 if not
*/

int test_str(char *s, char *r, int l, char *os)
{
	if (*s == *r)
	{
		if (l % 2)
		{
			if ((*s == os[(l / 2) - 1]) && (*r == os[(l / 2) + 1]))
				return (1);
		}
		else
		{
			if ((*s == os[(l / 2) - 1]) && (*r == os[(l / 2)]))
				return (1);
		}
		return (test_str((s + 1), (r - 1), l, os));
	}
	return (0);
}
/**
 * _strlen_recursion - Returns the length of a string
 * @s: A pointer to the given string
 * Return: the length of the string, 0 if s is empty
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(++s));
	else
		return (0);
}
