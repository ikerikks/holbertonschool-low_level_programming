#include "main.h"

/**
 * _strchr - locates a charater string
 *
 * @s: string
 *
 * @c: charater
 *
 * Return: character value
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + 2);
		}
	}

	return ('\0');

}
