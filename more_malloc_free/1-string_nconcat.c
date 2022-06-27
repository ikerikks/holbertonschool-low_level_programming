#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: unsigned integer value
 *
 * Return: any value
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int size1;
	unsigned int size2;
	unsigned int i;
	unsigned int j;

	if (s1 != NULL)
	{
		for (size1 = 0; s1[size1] != '\0'; size1++)
			;
	}

	else
		size1 = 0;

	if (s2 != NULL)
	{
		for (size2 = 0; s2[size2] != '\0'; size2++)
			;
	}

	else
		size2 = 0;

	s3 = malloc((size1 + size2 + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		s3[i] = s1[i];

	for (j = size1; j < n && s2[size1] != '\0'; j++)
		s3[j] = s2[j - size1];

	return (s3);


}
