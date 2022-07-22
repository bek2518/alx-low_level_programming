#include "main.h"

/**
 * _islower - Shows 1 if input is lowercase, otherwise shows 0
 *
 * @c: The character is ASCII
 *
 * Return: 1 for lowercase character, 0 for the rest
 */
int _islower(int c)
/*_islower - checks lowercase */
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
