/**
 * swap_int - Swaps the values of two integers.
 * @a: A pointer to the first integer
 * @b: A pointer to the second integer
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
