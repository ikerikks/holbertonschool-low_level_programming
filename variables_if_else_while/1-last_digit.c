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

int n;
int lastDigit;

n = rand() - RAND_MAX / 2;
lastDigit = n % 10;

	printf("Last digit of ");

	if (lastDigit > 5)
	{
		printf("%d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("%d is %d and is 0\n", n, lastDigit);
	}
	else
	{
		printf("%d is %d and is less than 6 and not 0\n", n, lastDigit);
	}


return (0);


}
