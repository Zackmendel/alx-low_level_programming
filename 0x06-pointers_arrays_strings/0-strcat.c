#include "main.h"

/**
 * strcat - a function that concatenates two strings
 *
 * @dest: input string
 * @src: input string
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dst = '\0';
	return (temp);
}
