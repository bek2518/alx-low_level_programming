#include <stdio.h>

/**
 * main - program that prits its name
 * @argc: count of command line segments
 * @argv: string of commandline arguments
 * Return: 0
 */
int main(int argc , char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
