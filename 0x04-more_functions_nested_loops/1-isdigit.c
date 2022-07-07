#include "main.h"

/**
 * _isdigit - checks if the character is digit
 * @c: The character to check
 * Return: 1 if c is digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
		return (1);
	else
		return (0);
}
