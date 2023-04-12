#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - function that concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: returns a pointer or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = strlen(s1) + strlen(s2) + 1;
	p = (char *) malloc(i * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	strcpy(p, s1);
	strcat(p, s2);
	return (p);
}
