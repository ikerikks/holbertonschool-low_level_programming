#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: string
 *
 * Return: string
 */

char *leet(char *str)
{
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char encode[] = {'4', '3', '0', '7', '1'};
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == lower[j] || str[i] == upper[j])
				str[i] = encode[j];
		}

	}


	return (str);

}
