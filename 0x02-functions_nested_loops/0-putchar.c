#include "main.h"
/**
 * main - print "_putchar", followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char t[] = "_putchar";
	int len = sizeof(t);

	for (i = 0; i < len - 1; i++)
	{
		_putchar(t[i]);
	}
	_putchar('\n');
	return (0);
}
