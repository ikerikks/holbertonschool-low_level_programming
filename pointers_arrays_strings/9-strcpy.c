#include "main.h"

/**
 * _strcpy - copies the string pointed to by 'src' to 'dest'
 *
 * @dest: destination pointer parameter
 *
 * @src: source pointer parameter
 *
 * Return: any value
 */


char *_strcpy(char *dest, char *src)
{
	int n;
	int i;

	for (n = 0; src[n] != '\0'; n++)
	;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);

}

