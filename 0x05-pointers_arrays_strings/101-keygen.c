#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid password for
 * program 101-creackme
 * Return: 0
 */

int main(void)
{
	int i, random, sum;
	char key[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[100];

	srand(time(NULL));
	sum = 0;
	i = 0;

	while (sum < 2772)
	{
		random = rand() % 128;
		password[i] = key[random];
		sum = sum + password[i];
		i++;
	}

	random = 2772 - sum;
	password[i] = random;
	i++;
	password[i] = '\0';
	printf("%s", password);

	return (0);
}
