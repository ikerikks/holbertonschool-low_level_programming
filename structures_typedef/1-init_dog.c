#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: pointer of type struct
 * @name: pointer of type char
 * @age: integer
 * @owner: pointer of type char
 *
 * Return: any value
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
