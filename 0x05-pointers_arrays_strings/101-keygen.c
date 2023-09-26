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
	int lower = 32, upper = 126, count = 10;
	int c, i;

	srand(time(NULL));

	for (i = 0; i < count; i++)
	{
		c = (rand() % (upper - lower + 1)) + lower;
		_putchar(c);
	}
	return (0);
}
