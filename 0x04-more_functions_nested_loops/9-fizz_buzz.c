#include <stdio.h>
/**
 * main - Prints the numbers from 1 to 100, followed by a new line.
 * for multiples of three Fizz will be printed instead of the number and
 * for the multiples of five Buzz will be printed,
 * For numbers which are multiples of both three and five
 * FizzBuzz will be printed.
 * Each number or word will be separated by a space
 * Return: Always 0.
*/

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf(" %s", "FizzBuzz");

		else if (i % 3 == 0)
			printf(" %s", "Fizz");

		else if (i % 5 == 0)
			printf(" %s", "Buzz");

		else
		{
			if (i == 1)
				printf("%d", i);
			else
				printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
