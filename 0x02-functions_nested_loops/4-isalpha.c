/**
 *_isalpha - checks for alphabetic character.
 * @c: is the letter to be checked
 * Return: 1 if c is a letter or 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}
