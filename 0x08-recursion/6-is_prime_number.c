int is_prime(int n, int d);

/**
 * is_prime_number - Returns if the input integer is a prime number
 * @n: the given number
 * Return: 0 if n less or equals zero or one,
 * is_prime otherwise
*/

int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (0);

	return (is_prime(n, 2));
}

/**
 * is_prime - checks if a number is prime or not
 * @n: the given number
 * @d: the divisor
 * Return: 1 if the input integer is a prime number, otherwise return 0
*/

int is_prime(int n, int d)
{
	if (n > d)
	{
		if (n % d == 0)
			return (0);

		return (is_prime(n, ++d));
	}
	return (1);
}
