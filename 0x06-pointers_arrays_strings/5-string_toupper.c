#include "main.h"

/**
 * string_toupper - changes all lowercase letters of string
 * to uppercase
 * @s: input string
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
	int i, placement;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			placement = 26 - ('z' - s[i]);
			s[i] = placement + 64;
		}
	}
	return (s);
}
