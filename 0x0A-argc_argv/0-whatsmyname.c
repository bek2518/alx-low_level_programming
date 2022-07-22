#include <stdio.h>

/**
 * main - program that prits its name
 * @argc: count of command line segments
 * @argv: string of commandline arguments
 * Return: 0
 */
int main (int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
