#include "main.h"

/**
 * _islower - short description
 * function checks for lowercase character
 * @c: integer
 * Return: 1 if is lowercase or 0 if it is uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
