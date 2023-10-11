#include <stdlib.h>

/**
 * print_name - Prints a name.
 * @name: A pointer to the given name
 * @f: A pointer to a function
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
