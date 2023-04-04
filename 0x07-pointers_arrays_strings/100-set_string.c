#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: parameter of the value of pointer
 * @to: char pointed to
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
