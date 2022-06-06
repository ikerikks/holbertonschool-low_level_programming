#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * n - generate random value
 * Return: Always 0 (success)
 *
 */

int main(void)
{

int n = RAND_MAX;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}


return (0);

}
