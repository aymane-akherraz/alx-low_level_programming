#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: The number of arguments passed
 * @argv: A pointer array which points to each argument passed to the program
 * Return: 1 if one of the number contains symbols that are not digits,
 * otherwise 0
*/

int main(int argc, char *argv[])
{
	int i, j, s = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("%s\n", "Error");
					return (1);
				}
			}
			s += atoi(argv[i]);
		}
		printf("%d\n", s);
	}
	return (0);
}
