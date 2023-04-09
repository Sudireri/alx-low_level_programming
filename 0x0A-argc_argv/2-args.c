#include <stdio.h>

/**
 * main - main function
 * @argc: counts the number of arguments
 * @argv: stores and prints all arguments recieved
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
