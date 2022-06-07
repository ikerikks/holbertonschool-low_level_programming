#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks alpha characters
 * @c: int value
 * Return: (1) if character is an alpha character, (0) if is not
 */

int _isalpha(int c)
{
	if ((isalpha(c)) != 0)
	{
		return (1);
	}

	else
	{
		return (0);

	}

}

