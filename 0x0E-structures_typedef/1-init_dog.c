#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - dog initialisation
 * struct dog: dog structure
 * @name: name of the dog
 * @d: dog address
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: description of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
#endif
