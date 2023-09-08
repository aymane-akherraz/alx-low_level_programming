#include <stdio.h>
/**
 * main - Prints all alphabets in lowercase,
 * followed by new line except q and e
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i == 4 || i == 16)
			continue;
		else
			putchar('a' + i);
	}
	putchar('\n');
	return (0);
}
