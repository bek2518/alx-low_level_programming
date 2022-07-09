#include "main.h"

/**
 * print_line -draws straight line in the terminal
 *
 * @n: Number of times line written
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
