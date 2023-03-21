#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - description of a dog
 * @type: kind of dog
 * @owner: owner of the dog
 * @age: age of the dog
 *
 * Description: Longer description
 */

struct dog
{
	char *type;
	float age;
	char *owner;
};

#endif
