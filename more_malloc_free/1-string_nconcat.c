#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates
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

	if (s1 == NULL)
		s1 = "";

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;

	if (s2 == NULL)
		s2 = "";

	for (size2 = 0; s2[size2] != '\0'; size2++)
		;

	if (n > size2)
		n = size2;

	s3 = malloc(size1 + n + 1);

	if (s3 == NULL)
	{
		free(s3);
		return (NULL);
	}

	for (i = 0; i < size1; i++)
		s3[i] = s1[i];

	for (j = size1; j < (size1 + n); j++)
		s3[j] = s2[j - i];

	s3[size1 + n] = '\0';


	return (s3);

}
