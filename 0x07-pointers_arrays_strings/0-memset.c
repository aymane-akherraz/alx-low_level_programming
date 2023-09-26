/**
 * _memset - fills memory with a constant byte.
 * @s: a pointer to the block of memory to fill.
 * @b:  the value to be set.
 * @n: the number of bytes to be set to the value.
 * Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
