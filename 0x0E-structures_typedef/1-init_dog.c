#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: the variable to be Initialized
 * @name: A pointer to the given name
 * @age: the given age
 * @owner: A pointer to the given owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL && name != NULL && owner != NULL && age != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
