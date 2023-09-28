#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - generates random valid passwords for the program 101-crackme.
 * Return: Always 0 (success)
*/

int main(void)
{
	int c, i;
	int count = 50;

	srand(time(NULL));

	for (i = 0; i < count; i++)
	{
		c = (rand() % 127);
		_putchar(c);
	}
	_putchar(127);
	return (0);
}
