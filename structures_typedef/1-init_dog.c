#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: pointer to a struct dog to initialize
 * @name: name of the dog, string
 * @age: age to initialize, float
 * @owner, owner to initialize, string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
