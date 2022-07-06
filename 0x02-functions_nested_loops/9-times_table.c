#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int a, b, c, d;
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = (a * b) / 10;
			d = (a * b) % 10;

			if ((a * b) > 9)
				_putchar(c + '0');
			_putchar(d + '0');
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (b == 9 && a == 0)
				break;
			else if (a * (b + 1) < 10)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
