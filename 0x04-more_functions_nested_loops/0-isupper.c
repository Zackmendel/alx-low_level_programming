#include "main.h"

/**
 * _isupper - a function that checks for uppercase letters
 *
 * @c: character input
 *
 * Return: 1 if c is uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
