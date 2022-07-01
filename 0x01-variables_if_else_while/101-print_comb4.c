#include <stdio.h>

/**
 * main - prints different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	a = 48;
	b = 48;
	c = 48;

	while (c < 58)
	{
		a = 48;
		b = 48;
		while (b < 58)
		{
			a = 48;
			while (a < 58)
			{
				if (c != b != a &&c < b < a)
				{
					putchar(c);
					putchar(b);
					putchar(a);
					if (a == 57 && b == 56 && c == 55)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				a++;
			}
			b++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}

