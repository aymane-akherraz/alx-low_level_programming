#include <stdlib.h>

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to be created
 * @c: A character by which the array will be	 initialized
 * Return: NULL if size = 0 or if it fails otherwise a pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	if (size)
	{
		s = malloc(sizeof(char) * size);
		if (s != NULL)
		{
			for (i = 0; i < size; i++)
				s[i] = 'H';
			return (s);
		}
	}
	return (NULL);
}
