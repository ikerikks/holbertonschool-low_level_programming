#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer parameter that points to the adress of a variable of type char
 *
 * Return: any value
 */


void rev_string(char *s)
{
	int i;
	int j;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	;

	i -= 1;

	for (j = 0;  j < i; j++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i--;

	}


}
