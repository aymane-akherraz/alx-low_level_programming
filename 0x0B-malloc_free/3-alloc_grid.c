#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: NULL on failure or if width or height is 0 or negative,
 * otherwise a pointer to a 2 dimensional array of integers
*/
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(height * sizeof(int *));

	if (a != NULL)
	{
		for (i = 0; i < height; i++)
			a[i] = malloc(width * sizeof(int));

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				a[i][j] = 0;
		}
		return (a);
	}
	for (i = 0; i <= height; i++)
		free(a[i]);

	free(a);
	return (NULL);
}
