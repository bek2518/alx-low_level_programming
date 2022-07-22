#include <stdio.h>

/**
 * main - program that prits its name
 * @argc: count of command line segments
 * @argv: string of commandline arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
