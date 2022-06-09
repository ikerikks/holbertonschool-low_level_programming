#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: any value
 */


void jack_bauer(void)
{
	int hours1;
	int hours2;
	int min;
	int sec;

	for (hours1 = 0; hours1 <= 2; hours1++)
	{
		for (hours2 = 0; hours1 != 2 ? hours2 <= 9 : hours2 <= 3; hours2++)
		{
			for (min = 0; min <= 5; min++)
			{
				for (sec = 0; sec <= 9; sec++)
				{
					_putchar(hours1 + '0');
					_putchar(hours2 + '0');
					_putchar(' ');
					_putchar(':');
					_putchar(' ');
					_putchar(min + '0');
					_putchar(sec + '0');
					_putchar('\n');
				}
			}
		}
	}
}

