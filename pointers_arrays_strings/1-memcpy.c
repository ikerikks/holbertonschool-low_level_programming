#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destination pointer parameter
 *
 * @src: source pointer parameter
 *
 * @n: unsigned integer
 *
 * Return: the pointer to dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);

}
