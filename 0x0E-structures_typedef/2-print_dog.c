#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog.
 * @d: The struct dog to be printed.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		print("Name: (ni1)\n");
	else
		printf("name: %s\n", d->name);
	if (d->age <0)
		printf("age: (ni1)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (ni1)\n");
	else
		printf("Owner:%s\n", d->owner);
}
