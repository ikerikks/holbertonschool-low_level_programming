#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int a = 1;

	while (a <= 89)
	{
		putchar(a / 10 + '0');
		putchar(a % 10 + '0');

		if (a < 89)
		{
			putchar(',');
			putchar(' ');
		}

		a++;
	}

	putchar('\n');



return (0);

}
