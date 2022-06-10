#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return - any value
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j != 0)
			{
				_putchar(',');

				if ((i * j) > 9)
				{
					_putchar(' ');
				}

				else
				{
					_putchar(' ');
					_putchar(' ');
				}
			}

			if ((i * j) > 9)
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}

			else
			{
				_putchar((i * j) % 10 + '0');
			}


		}

		_putchar('\n');

	}

}
