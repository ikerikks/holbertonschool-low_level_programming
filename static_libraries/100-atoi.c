#include "main.h"

/**
 * _atoi - converts a string into an integer
 *
 * @s: string
 *
 * Return: integer vaalue
 */

int _atoi(char *s)
{
	int res = 0;

	for (int i = 0; s[i] != '\0'; ++i)
		res = res * 10 + s[i] - '0';

	return res;

}
