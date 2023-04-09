#include <stdio.h>

/**
 * main - entry
 * @argc: counts the number of arguments passed
 * @argv: stores memory of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
