#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: value
 * @index: index
 * Return: 1 if it worked or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
