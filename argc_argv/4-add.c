#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 *
 * @argc: counter argument
 *
 * @argv: vector argument
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argc == 1)
			{
				printf("0\n");
			}

			else if (!isdigit(argv[i][j]))
			{
				printf("Error\n");

				return (1);
			}

			else
				sum += atoi(argv[i]);

		}


	}

	printf("%d\n", sum);

	return (0);


}
