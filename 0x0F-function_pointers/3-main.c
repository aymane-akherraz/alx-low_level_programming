#include "calc.h"

/**
 * main - Prints all arguments it receives
 * @argc: The number of arguments passed
 * @argv: A pointer array which points to each argument passed to the program
 * Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	int (*f)(int a, int b), r;
	char op;

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("%s\n", "Error");
		exit(99);
	}

	op = argv[2][0];

	if ((op == '/' || op == '%') && argv[3][0] == '0')
	{
		printf("%s\n", "Error");
		exit(100);
	}

	r = f(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", r);

	return (0);
}
