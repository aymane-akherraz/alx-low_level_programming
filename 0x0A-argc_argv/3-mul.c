#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: The number of arguments passed
 * @argv: A pointer array which points to each argument passed to the program
 * Return: 1 if the program does not receive two arguments otherwise 0
*/

int main(int argc, char *argv[])
{
	int r;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	r = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", r);

	return (0);
}
