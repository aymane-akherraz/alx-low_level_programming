#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: the size of memory to be allocated
 * Return: a pointer to the allocated memory, otherwise 98
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
