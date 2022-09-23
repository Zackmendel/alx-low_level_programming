#include "main.h"

/**
 * _isalpha(int c) - short description
 * function checks alphabetic characters
 * @c: imteger
 * Return: 1 for loop and 0 otherwise
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
