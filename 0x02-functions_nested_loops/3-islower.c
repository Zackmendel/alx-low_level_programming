#include "main.h"

/**
 * int_islower(int c) - short description
 * function checks for lowercase character
 *
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
