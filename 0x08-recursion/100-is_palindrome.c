#include "main.h"
int _strlen_recursion(char *s);

/**
 * is_palindrome - function that returns 1 if string is palindrome
 * @s: string parameter
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen recursion(s)));
}
