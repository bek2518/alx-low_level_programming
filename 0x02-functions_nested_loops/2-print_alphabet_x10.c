#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets using _putchar 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)

{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 95; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
