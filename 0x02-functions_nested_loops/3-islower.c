#include "main.h"
 /**
  * _islower - checks for lowecase character
  *main - checks the code
  * 
  * Return: 1 if c is lowercase, otherwise prints 0
  */

int _islower(int c)
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
