#include "main.h"

/**
 * _islower - checks lowercase character
 * @c: int value
 * Return: (1) if character is in lowercase, (0) if is not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}

