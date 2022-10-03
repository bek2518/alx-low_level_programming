#include "main.h"

/**
 * _strncpy - copies a string
 * @src: The string to cpoy
 * @dest: the destination string
 * @n: The number of bytes to copy from src
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
