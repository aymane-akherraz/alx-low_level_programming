/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: the given number
 * @y: the to be raised to
 * Return: -1 If y is lower than 0, 1 if y equals 0,
 * the resulted value otherwise
*/

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, (y - 1)));
	else if (y < 0)
		return (-1);
	else
		return (1);
}
