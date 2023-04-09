#include <stdio.h>
#include <stdlib.h>

/**
 * main - name of program
 * @argc: counts the number of arguments
 * @argv: stores memory of arguments
 *
 * Return: 1 when doesn't receive two integers, otherwise 0
 */

int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
	}
	return (0);
}
