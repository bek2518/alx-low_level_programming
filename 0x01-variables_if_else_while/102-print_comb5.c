#include <stdio.h>

/**
 * main - prints different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	a = 48;
	b = 48;
	{	
		putchar(b);
		putchar(a);
		putchar(',');
		putchar(' ');
		a++;
		}
		b++;	
	putchar('\n');
	return (0);
}

