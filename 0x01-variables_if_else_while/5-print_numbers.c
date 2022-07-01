#include <stdio.h>
/**
 * main - Prints single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[10] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
