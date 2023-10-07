#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: ptr If new_size == old_size, a Pointer to the newly
 * allocated space, otherwise NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *np;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		np = malloc(new_size);
		if (np != NULL)
			return (np);
		free(np);
	}

		np = malloc(new_size);
		if (np != NULL)
		{
			for (i = 0; (i < old_size && i < new_size); i++)
				np[i] = ((char *)ptr)[i];

			free(ptr);
			return (np);
	}
}
