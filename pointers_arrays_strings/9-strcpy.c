#include "main.h"

/**
 * _strcpy - copies the string pointed to by 'src' to 'dest'
 *
 * @dest: destination pointer parameter, pointing to the adress of a variable of char type
 *
 * @src: source pointer parameter, pointing to the adress of a variable of char type
 *
 * Return: any value
 */


char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		
	}

	return (dest);


}

