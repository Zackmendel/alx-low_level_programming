#include "main.h"

/**
 * _abs(int) - short description
 * function computes the absolute value of an integer
 * @a: is an integer input
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
