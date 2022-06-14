#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: parameter pointer, pointing to an variable adress
 *
 * Return: the length of a string
 */


int _strlen(char *s)
{
	int i; 

	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
	}
	
	return (i);

}
