#include <stdio.h>

/**
 * main - prints Fizz for multiple of 3
 * prints buzz for multiples of 5
 * prints FizzBuzz for multiples of 3 and 5
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, a, b;
	for (n = 1; n <= 100; n++)
	{
		a = n % 3;
		b = n % 5;

		if (a == 0 && b == 0)
			printf("FizzBuzz");
		else if (a == 0)
			printf("Fizz");
		else if (b == 0)
			printf("Buzz");
		else
			printf("%d", n);

		if (n != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
