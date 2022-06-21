#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string
 *
 * @accept: character
 *
 * Return: the number of bytes in the initial segment of 's'
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int count;

	count = 0;

	for (i = 0; accept[i] != '\0'; i++)
	;

	for (j = 0; s[j] != '\0'; j++)
	;

	for (k = 0; k < i; k++)
	{
		if (count == j)
			break;

		if (accept[k] == s[count])
			count++;
	}

	return (count);

}






