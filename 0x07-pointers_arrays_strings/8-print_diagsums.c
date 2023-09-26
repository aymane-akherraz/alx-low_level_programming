#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: The given array
 * @size: size of the array
*/

void print_diagsums(int *a, int size)
{
	int i, s = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s += a[i * size + i];
	}

	for (i = (size - 1); i >= 0; i--)
		s2 += a[(size - i) * (size - 1)];

	printf("%d, %d\n", s, s2);
}
