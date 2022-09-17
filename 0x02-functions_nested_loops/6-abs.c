#include "main.h"

/**
 * _abs(int) - short description
 * @a: is an integer input
 * This function returns absolute value of a number
 *
 * Return: Absolute value of number
 */
int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (a * -1);
}
