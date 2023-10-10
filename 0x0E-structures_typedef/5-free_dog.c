#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs
 * @d: A pointer to a variable of type t_dog
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
