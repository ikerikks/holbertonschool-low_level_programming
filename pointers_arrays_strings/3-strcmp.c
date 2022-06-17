#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: pointer parameter of type char
 *
 * @s2: pointer parameter of type char
 *
 * Return: integer value
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = s1[0];
	j = s2[0];

	while (i && j && i == j)
	{
		for (i = 0; i != '\0'; i++)
		;

		for (j = 0; j != '\0'; j++)
		;
	}


	return (i - j);


}
