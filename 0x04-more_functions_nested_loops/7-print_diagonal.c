#include "main.h"

/**
 * print_diagonal - draws diagonal line in terminal
 * @n: Number of time printed
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n <= 0)
		_putchar('\n');
}
