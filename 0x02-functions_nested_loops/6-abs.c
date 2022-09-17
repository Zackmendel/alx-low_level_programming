#include "main.h"

/**
 * _abs - short description
 * @a: is an integer input
 * This function computes the absolute value of an integer
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
