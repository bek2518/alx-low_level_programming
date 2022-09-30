#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string input
 * Return: dest pointer
 */

char *rot13(char *s)
{
	int count = 0, i;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[count] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (s[count] == letters[i])
			{
				s[count] = rot[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
