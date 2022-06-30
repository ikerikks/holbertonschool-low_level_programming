#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 *
 * @d: pointer of type struct
 *
 * Return: any value
 */

void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;

	name = d->name;
	age = d->age;
	owner = d->owner;

	if (d != NULL)
	{
		if (name != NULL)
			printf("Name: %s\n");

		else
			printf("Name: (nil)\n", name);

		printf("Age: %f\n", age);

		if (owner != NULL)
			printf("Owner: %s\n");

		else
			printf("Owner: (nil)\n", owner);
	}

}
