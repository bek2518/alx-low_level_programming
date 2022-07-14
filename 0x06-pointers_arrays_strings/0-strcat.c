#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: string to be appended
 * @dest: destination
 * Return: value
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	for (len = 0; dest[len] != 0; len++)
		;
	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}
	return (dest);
}
