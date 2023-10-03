#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: The number of arguments passed
 * @argv: A pointer array which points to each argument passed to the program
 * Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
