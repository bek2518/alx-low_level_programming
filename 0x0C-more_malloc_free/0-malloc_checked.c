#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: amount of byte
 * Return: poiter to allocated memory or 98 if fail
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
