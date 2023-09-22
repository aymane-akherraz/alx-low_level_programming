void rev_string(char *s);

/**
 * infinite_add - Adds two numbers.
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 * Return: r, the resulted array
*/


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, ov, v1, v2, s, k;

	i = 0;
	while (n1[i] != '\0')
		i++;

	j = 0;
	while (n2[j] != '\0')
		j++;

	j--;
	i--;

	if (size_r <= i || size_r <= j)
		return (0);

	ov = 0;
	v1 = 0;
	v2 = 0;
	s = 0;
	k = 0;
	while (i >= 0 || j >= 0 || ov == 1)
	{
		if (i >= 0)
			v1 = n1[i] - '0';
		else
			v1 = 0;

		if (j >= 0)
			v2 = n2[j] - '0';
		else
			v2 = 0;

		if (ov == 1)
			s = v1 + v2 + ov;
		else
			s = v1 + v2;

		if (s >= 10)
			ov = 1;
		else
			ov = 0;

		if (k >= (size_r - 1))
			return (0);

		r[k] = (s % 10) + '0';
		k++;
		i--;
		j--;
	}
	if (k < size_r)
		r[k] = '\0';
	else
		return (0);

	rev_string(r);
	return (r);
}

/**
 * rev_string - Reverses a string.
 * @s: A pointer to the given string
*/

void rev_string(char *s)
{
	int j = 0, len = 0, i;
	char tmp;

	while (s[j] != '\0')
		j++;

	len = j - 1;

	for (i = 0; i < (j / 2); i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len--] = tmp;
	}
}
