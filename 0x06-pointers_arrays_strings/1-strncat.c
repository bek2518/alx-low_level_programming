#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: the string to append
 * @dest: string to concatenates with src
 * @n: number of bytes to append
 * Return: sting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	for (len = 0; dest[len] != 0; len++)
		;
	for (i = 0; i < n; i++)
	{
		dest[len] = src[i];
		len++;
	}
	return (dest);
}
