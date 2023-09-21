/**
 * rot13 - Encodes a string using rot13.
 * @s: The given string
 * Return: s, the resulted string
*/
char *rot13(char *s)
{
	int i, j;

	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = r[j];
				break;
			}
		}
	}
	return (s);
}
