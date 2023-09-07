#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	sizeof(char),
	strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"),
	stderr);
	return (1);
}
