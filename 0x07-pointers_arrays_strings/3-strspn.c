/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, eq = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				eq = 1;
				break;
			}
		}
		if (eq == 0)
			break;
		eq = 0;
	}
	return (i);
}
