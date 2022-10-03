#include "main.h"

/**
 * *_strcpy - copies string pointed to by src
 * @src: String to be copied
 * @dest: Destination of the string
 * Return: The string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
