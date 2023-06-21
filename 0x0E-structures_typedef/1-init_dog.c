#include "dog.h"
#include "stdlib.h"
/**
 * init_dog - a function that initialize a variable
 * @d: dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
