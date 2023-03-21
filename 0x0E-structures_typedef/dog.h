#ifndef _DOG_H_
#define _DOG_H_
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
