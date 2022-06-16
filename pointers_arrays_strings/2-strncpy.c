#include "main.h"

/**
 * _strncpy - copies the string pointed to by 'src' to 'dest'
 *
 * @dest: destination pointer parameter
 *
 * @src: source pointer parameter
 *
 * @n: paremeter of type int
 *
 * Return: the pinter to dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);

}
