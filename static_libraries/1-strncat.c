#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination pointer parameter
 *
 * @src: source pointer parameter
 *
 * @n: parameter of type int
 *
 * Return: pointer to the resulting string 'dest'
 */


char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);

}
