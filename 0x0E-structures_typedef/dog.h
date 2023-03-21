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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char);
typedef struct dog dog_t;

#endif
