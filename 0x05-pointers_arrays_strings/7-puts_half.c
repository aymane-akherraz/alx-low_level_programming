#include "main.h"
/**
 * puts_half- Prints half of a string, followed by a new line.
 * @str: A pointer to the given string
*/

void puts_half(char *str)
{
	int len = 0, i, n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
	{
		for (i = (len / 2); i < len; i++)
			_putchar(str[i]);
	} else
	{
		n = (len - 1) / 2;
		for (i = (len - n); i < len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
