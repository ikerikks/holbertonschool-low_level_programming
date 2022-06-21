#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: counter argument
 *
 * @argv: vector argument
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	argc -= 1;

	printf("%d\n", argc);


	return (0);


}
