#include <stdlib.h>

/**
 * array_iterator - Executes a function given as a parameter
 * on each element of an array
 * @array: A pointer to the given array
 * @size: the size of the array
 * @action: is a pointer to the function you need to use
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
