#include "main.h"

/**
 * find_strlen - main function
 * @s: string parameter to be checked
 *
 * Return: -1 if palindrome, 0 if otherwise
 */

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}

/**
 * check_palindrome - function checking if string is palindrome
 * @s: string parameter being checked
 * @len: length of the string
 * @i: index of the string
 *
 * Return: -1 if palindrome, 0 if otherwise
 */

int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);
	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));
	return (0);
}

/**
 * is_palindrome - function checking if string is palindrome
 * @s: string
 *
 * Return: -1 if palindrome, 0 if otherwise
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, i));
}
