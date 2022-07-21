#include "main.h"

/**
 * strlen_recursion - Finds the length of a string
 * @s: string
 * Return: Length of the string
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + strlen_recursion(s));
}

/**
 * helper - evaluates string
 * @s: String
 * @len: length of string
 * Return: 1 if s is palindrome, otherwise 0
 */
int helper(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
		return (helper(s + 1, len - 2));
	else
		return (0);
}
/**
 * is_palindrome - evaluates if a string is palindrome
 * @s: String
 * Return: 1 if palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen_recursion(s);

	if (len <= 1)
		return (1);
	return (helper(s, len));
}
