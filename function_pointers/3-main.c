#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * main - Checks parameters and starts calculation if no problem
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return:
 *	0 if no error
 *	98 if the number of arguments is wrong
 *	99 if the operator is not + - * / or %
 *	100 if trying to divide by 0
 */
int main(int argc, char **argv)
{
	int i;
	int j;

	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ptr = get_op_func(argv[2]);
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	if ((ptr == NULL) || (argv[2][1]))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '%' || argv[2][0] == '/') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
printf("%d\n", ptr(i, j));

return (0);

}
