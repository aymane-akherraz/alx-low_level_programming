/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements of the array
*/

void reverse_array(int *a, int n)
{
	int i, tmp, len;

	len = n - 1;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[len];
		a[len] = tmp;
		len--;
	}
}
