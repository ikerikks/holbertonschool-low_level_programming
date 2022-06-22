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
	int sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argc == 1)
		{
			printf("0\n");
		}

		else if (!isdigit(*argv[i]))
		{
			printf("Error\n");

			return (1);
		}

		else
			sum += atoi(argv[i]);


	}

	printf("%d\n", sum);

	return (0);


}
