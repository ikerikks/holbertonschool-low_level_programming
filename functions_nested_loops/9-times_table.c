#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 *
 * Return: any value
 */


void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d", (i * j));

			if (j != 9)
			{
				printf(",");
			}

			if ((i * j) > 9)
			{
				printf(" ");
			}

			else
			{
				printf("  ");

			}

		}

		printf("\n");

	}

}
