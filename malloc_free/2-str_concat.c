#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: destination string
 *
 * @s2: source string
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int size1;
	int size2;
	int i;
	int j;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
		size1 = i;
	}

	else 
		size1 = 0;

	
	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
		size2 = j;
	}

	else
		size2 = 0;

	s3 = malloc((i + j + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		s3[i] = s1[i];

	for (j = size1; j < size1 + size2; j++)
		s3[j] = s2[j - size1];


	return (s3);


}

