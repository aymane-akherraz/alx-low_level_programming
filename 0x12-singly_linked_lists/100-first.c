#include "lists.h"
/**
 * exe_first - Prints some text before the main function is executed
 *
 * Return: nothing
*/
void exe_first(void) __attribute__((constructor));

void exe_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
