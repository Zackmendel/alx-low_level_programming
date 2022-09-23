#include "main.h"

/**
 * string_toupper - a function that changes all 
 * of a string to uppercase
 *
 * @s: input string
 *
 * Return: character pointer of the converted string
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
