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

	i = *s1;
	j = *s2;

	while (i && j && i == j)
	{
		for (i = 0; i != '\0'; i++)
		;

		for (j = 0; j != '\0'; j++)
		;
	}


	if (i < j)
	{
		return (i - j);
	}

	else if (i > j)
	{
		return (i - j);
	}

	else
	{
		return (0); 
	}


}
