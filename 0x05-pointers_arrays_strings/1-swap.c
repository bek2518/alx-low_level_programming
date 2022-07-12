#include "main.h"

/**
 * swap_int - swaps the value of 2 integers
 * @a: First integer
 * @b: Second integer
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
