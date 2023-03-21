#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - structure details for dog
 * @name: name of teh dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: description of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
