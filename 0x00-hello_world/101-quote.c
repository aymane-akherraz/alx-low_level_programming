#include <stdio.h>
#include <string.h>
/**
 * main - Prints some text followed by a new line, to the standard error.
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	sizeof(char),
	strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"),
	stderr);
	return (1);
}
