#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
		putchar('a' + i);

	for (i = 0; i < 26; i++)
		putchar('A' + i);

	putchar('\n');
	return (0);
}
