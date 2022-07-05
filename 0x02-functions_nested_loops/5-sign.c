#include "main.h"

/**
 * print_sign - Prints + if greater than 0, 0 if zer and - if less than 0
 *
 * @n: The input number as character
 *
 * Return: 1 if greater that 0, 0 if zero or -1 if kess than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
