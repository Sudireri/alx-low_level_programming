#include <stdio.h>
#include <stdlib.h>

/**
 * main - name of the program
 * @argc: counts the number of arguments
 * @argv: stores memory and prints arguments passed
 *
 * Return: 1 if has symbols not digits, otherwise 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
