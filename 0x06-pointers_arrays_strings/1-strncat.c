#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: the string to append
 * @dest: string to concatenates with src
 * @n: number of bytes to append
 * Return: string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (*(dest + len) != '\0')
	{
		len++;
	}

	while (i < n)
	{
		*(dest + len) = *(src + i);
		if (*(src + i) == '\0')
			break;
		len++;
		i++;
	}
	return (dest);
}
