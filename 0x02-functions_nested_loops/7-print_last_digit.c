#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * Return: last digit
 */
int print_last_digit(int i)
{
	int l;
	
	l = i % 10;
	if (i > 0)
	{
		_putchar(l + 48);
		return (1);
	}
	else
	{
		_putchar(-l + 48);
		return (-1);
	}
}
