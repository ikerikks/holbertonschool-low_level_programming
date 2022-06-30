#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: character
 * @age: integer
 * @owner: character
 *
 * Return: struct type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int i;

	if (name == NULL || age <= 0 || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(*my_dog));

	if (my_dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	my_dog->name = malloc(sizeof(char) * i + 1);

	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		;
	my_dog->owner = malloc(sizeof(char) * i + 1);

	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		my_dog->name[i] = name[i];
	my_dog->name[i] = '\0';
	my_dog->age = age;

	for (i = 0; owner[i] != '\0'; i++)
		my_dog->owner[i] = owner[i];

	my_dog->owner[i] = '\0';
	return (my_dog);
}
