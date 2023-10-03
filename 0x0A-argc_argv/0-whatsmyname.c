#include <stdio.h>

/**
 * main - Prints its name, followed by a new line
 * @argc: The number of arguments passed
 * @argv: A pointer array which points to each argument passed to the program
 * Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
