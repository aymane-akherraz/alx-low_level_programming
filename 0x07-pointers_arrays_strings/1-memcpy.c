/**
 * _memcpy - copies memory area.
 * @dest: a pointer to the destination array where the content is to be copied
 * @src: a pointer to the source of data to be copied
 * @n: the number of bytes to be copied
 * Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
