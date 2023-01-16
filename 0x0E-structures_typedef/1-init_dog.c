#include "dog.h"
#include <stdlib.h>

/**
 * int_dog - intializes a variable of type struct dog.
 * @d: The dog to be initialized.
 * @name: The nmae of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
void int_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
