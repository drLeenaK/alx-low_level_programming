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

};
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	
	return (0);
}
#endif
