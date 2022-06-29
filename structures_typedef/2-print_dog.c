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

	if (d == NULL)
		exit(0);

	else
	{
		if (name == NULL)
			printf("Name : (nil)\n");

		else
			printf("Name: %s\n", name);

		printf("Age: %f\n", age);

		if (owner == NULL)
			printf("Owner: (nil)\n");

		else
			printf("Owner: %s\n", owner);
	}

}
