#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: Aalways 0 (Sucess)
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				k = j / 10;
				_putchar(k + '0');
			}
			else
				_putchar((j % 10) + '0');
		}
	_putchar('\n');
	}
}
