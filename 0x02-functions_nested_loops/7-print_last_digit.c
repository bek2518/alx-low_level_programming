#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * Return: last digit
 */
int print_last_digit(int i)
{
	int l;
	
	l = i % 10
	if (l < 0)
	{
		l = l * -1
	}
		_putchar(l + '0');
		return (l);
	}
}
