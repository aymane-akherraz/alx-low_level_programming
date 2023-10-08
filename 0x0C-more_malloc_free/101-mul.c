#include <stdlib.h>
#include <unistd.h>

int _isdigit(int c);
int _strlen(char *s);
int _atoi(char c);
void mul(char *n1, char *n2, int l1, int l2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
void _add(int **g, int w, int h, int l2);
int _putchar(char c);
void _puts(char *str);

/**
 * main - Multiplies two positive numbers
 * @argc: The number of arguments passed
 * @argv: A pointer array which points to each argument passed to the program
 * Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (_isdigit(argv[i][j]) == 0)
			{
				_puts("Error");
				exit(98);
			}
		}
	}
	mul(argv[1], argv[2], _strlen(argv[1]), _strlen(argv[2]));
	return (0);
}
/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: is the input to be checked
 * Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to the given string
 * Return: The length of the given string.
*/
int _strlen(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
		l++;

	return (l);
}
/**
 * _atoi - Convert a char to an integer.
 * @c: the given character
 * Return: An integer
*/
int _atoi(char c)
{
	return (-('0' - c));
}
/**
 * mul - Multiplies two numbers
 * @n1: A pointer to the first given number
 * @n2: A pointer to the second given number
 * @l1: the length of n1
 * @l2: the length of n2
 * Return: Nothing
*/
void mul(char *n1, char *n2, int l1, int l2)
{
	int **a, w, h, i, j, k, m, ov, r;

	w = l1 + l2;
	if (l2 == 1)
		h = l2;
	else
		h = l2 + 1;

	a = alloc_grid(w, h);

	if (a != NULL)
	{
		k = 0;
		ov = 0;
		for (i = (l2 - 1); i >= 0; i--)
		{
			m = w - (k + 1);
			for (j = (l1 - 1); j >= 0; j--)
			{
				r = (_atoi(n2[i]) * _atoi(n1[j])) + ov;
				if (r < 10)
				{
					a[k][m] = r;
					if (ov != 0)
						ov = 0;
				}
				else
				{
					a[k][m] = r % 10;
					ov = r / 10;
				}
				m--;
			}
			if (ov != 0)
			{
				a[k][m] = ov;
				ov = 0;
			}
			k++;
		}
		_add(a, w, h, l2);
		free_grid(a, h);
	}
	else
		free_grid(a, h);
}
/**
 * _add - Adds the numbers resulted from mul
 * @g: A pointer to the two dimensional grid
 * @w: width of the grid
 * @h: height of the grid
 * @l2: the length of n2, the second given string
*/
void _add(int **g, int w, int h, int l2)
{
	int i, j, s, ov;

	if (l2 != 1)
	{
		j = w - 1;
		s = 0;
		ov = 0;
		while (j >= 0)
		{
			for (i = 0; i < (h - 1); i++)
				s += g[i][j];

			if ((s + ov) < 10)
			{
				g[h - 1][j] = s + ov;
				if (ov != 0)
					ov = 0;
			}
			else
			{
				g[h - 1][j] = (s + ov) % 10;
				ov = (s + ov) / 10;
			}
			s = 0;
			if (j == 0 && g[h - 1][j] == 0)
			{
				if (ov != 0)
					g[h - 1][j] = ov;
			}
			j--;
		}
	}
	for (i = 0; i < w; i++)
	{
		if (g[h - 1][i] == 0)
		{
			if (i == 0)
				continue;
		}
		_putchar('0' + g[h - 1][i]);
	}
	_putchar('\n');
}
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
		{
			a[i] = malloc(width * sizeof(int));

			if (a[i] == NULL)
			{
				for (j = i; j >= 0; j--)
					free(a[j]);
				free(a);
				return (NULL);
			}
		}

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				a[i][j] = 0;
		}
		return (a);
	}
	free(a);
	return (NULL);
}
/**
 * free_grid - Frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: A pointer to the given string
*/
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*(str++));

	_putchar('\n');
}
