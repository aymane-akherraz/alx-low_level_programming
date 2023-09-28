int _sqrt(int n, int r);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: the given number
 * Return: -1 if n is less or equal to 0, _sqrt otherwise
*/

int _sqrt_recursion(int n)
{
	if (n > 0)
	{
		return (_sqrt(n, 1));
	}
	else
		return (-1);
}

/**
 * _sqrt - Finds the square root of the given number
 * @n: the given number
 * @r: the square root
 * Return: -1 if n does not have a natural square root,
 * the resulted square root otherwise
*/

int _sqrt(int n, int r)
{
		if (r * r == n)
			return (r);

		if (r > n)
			return (-1);

		return (_sqrt(n, ++r));
}
