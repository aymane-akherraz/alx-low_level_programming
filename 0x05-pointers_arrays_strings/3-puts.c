#include "main.h"
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
