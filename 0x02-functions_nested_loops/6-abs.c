#include "main.h"

/**
 * _abs(int) - short description
 * @a: an integer input
 * function computes the absolute value of an integer
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
