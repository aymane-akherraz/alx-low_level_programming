#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the opcodes of its own main function
 * @argc: The number of arguments passed
 * @argv: A pointer array which points to each argument passed to the program
 * Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int n, i;

	char *p = (char *)main;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("%s\n", "Error");
		exit(2);
	}
	for (i = 0; i < n; i++)
	{
		printf("%02hhx", p[i]);

		if (i < (n - 1))
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
