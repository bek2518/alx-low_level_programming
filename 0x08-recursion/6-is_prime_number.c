#include "main.h"

/**
 * helper - detects if an input is a prime number
 * @n: input number
 * @c: helper
 * Return: 1 if prime number otherwise 0
 */
int helper(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + helper(n, c + 1));
}
/**
 * is_prime_number - if input is prime number or not
 * @n: integer
 * Return: 1 if integer, otherwise 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 1)
		return (0);
	if (n == 1)
		return (0);
	return (helper(n, 2));
}
