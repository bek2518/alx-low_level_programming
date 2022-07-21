#include "main.h"

/**
 * is_prime_number - if input is prime number or not
 * @n: integer
 * Return: 1 if integer, otherwise 0
 */
int is_prime_number(int n)
{
	if (n % 2 == 0)
		return (0);
	else
		return (1);
}
