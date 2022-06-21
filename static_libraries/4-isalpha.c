#include "main.h"

/**
 * _isalpha - checks alpha characters
 * @c: int value
 * Return: (1) if character is an alpha character, (0) if is not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}

}

