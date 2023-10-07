#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: the minimum value in the array
 * @max: the maximum value in the array
 * Return: the pointer to the newly created array otherwise NULL
*/

int *array_range(int min, int max)
{
	int *a, i, r;

	if (min > max)
		return (NULL);

	r = (max - min) + 1;
	a = malloc(r * sizeof(int));

	if (a != NULL)
	{
		for (i = 0; i < r; i++)
		{
			a[i] = min;
			min++;
		}
		return (a);
	}
	return (NULL);
}
