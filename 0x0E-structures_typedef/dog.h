#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - dog's info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: Longer description
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
