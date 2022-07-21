#include "main.h"

/**
 * helper - the natural square root of a number
 * @n:number
 * Return: natural square root or -1
 */
int helper(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if (n > (i * i))
		return (helper(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - Returns the natural squareroot
 * of a number
 * @n: Number
 * Return: Integer natural number squareroot of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (helper(n, 1));
}

