/**
 * _islower - checks for lowercase character.
 * @c: is the letter to be checked
 * Return: 1 if c is lowercase or 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
