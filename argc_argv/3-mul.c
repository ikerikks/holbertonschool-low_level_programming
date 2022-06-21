#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: counter argument
 *
 * @argv: vector argument
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	if (argv[2] == NULL)
		printf("Error\n");

	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));


	return (0);


}
