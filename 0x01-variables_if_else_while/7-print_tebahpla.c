#include <stdio.h>
/**
 * main - Prints alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
