#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: Aalways 0 (Sucess)
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (i = 0; i <= 14; i++)
			_putchar(i + '0');
	}
	_putchar('0');
}
