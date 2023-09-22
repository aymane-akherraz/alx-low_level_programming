#include <stdio.h>
/**
 * print_buffer - Prints a buffer
 * @b: the given buffer
 * @size: size of the buffer
*/

void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
		printf("\n");
	else
	{
		k = 0;
		while (k < size)
		{
			if ((size - k) < 10)
				i = size - k;
			else
				i = 10;

			printf("%06x", 0);
			printf("%02x: ", k);

			for (j = 0; j < 10; j++)
			{
				if (j < i)
					printf("%02x", b[k + j]);
				else
					printf("  ");

				if (j % 2)
					printf(" ");
			}
			for (j = k; j < (k + i); j++)
			{
				if (b[j] >= 32)
					printf("%c", b[j]);
				else
					printf(".");
			}
			k += 10;
			printf("\n");
		}
	}
}
