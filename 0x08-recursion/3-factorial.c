#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: given number
 * Return: factoral
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
