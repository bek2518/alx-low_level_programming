#include "main.h"
 /**
  * _is lower - Shows 1 if the input is a
  * lowercase character. Another cases, shows
  * 0
  *
  * @c: The character in ASCII code
  *
  * Return: 1 if c is lowercase, otherwise prints 0
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
