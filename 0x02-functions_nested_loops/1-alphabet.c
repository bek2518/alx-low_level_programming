#include "main.h"

/**
 * prints the alphabets in lowercase
 *
 * Description: prints alphabets using _putchar
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)

{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
