#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: string
 *
 * @b: character
 *
 * @n:intefgor
 *
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);


}
