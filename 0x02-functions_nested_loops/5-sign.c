#include "main.h"

/**
 * int print_sign(int n) - short description
 * function prints the sign of a number
 *
 * Return: 1 and prints + if n > 0, 0 and
 * prints 0 if n == 0, -1 and prints - if n < 0 
 */
int print_sign(int n)
{
	int val;

	if (n > 0)
	{
		val = 1;
		_putchar('+');
	}
	else if (n == o)
	{
		val = o;
		_putchar('0');
	}
	else
	{
		val = -1;
		_putchar('-');
	}
	return (val);
}

