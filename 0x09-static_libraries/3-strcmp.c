#include "main.h"
/**
 * _strcmp - a function that compares two things
 *
 * @s1: input string
 * @s2: input string
 * Return: difference in the two strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
