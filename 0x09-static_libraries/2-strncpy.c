#include "main.h"

/**
 * _strncpy - a function that copies the string
 *
 * @dest: input string
 * @src: input string
 * @t: an integer
 *
 * Return: pointer to the reulting sring
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

		srclen++;

		if (n > srclen)
			n = srclen;

		src = start;

		for (; i < n; i++)
			*dest++ = *src++;

		return (temp);
}
