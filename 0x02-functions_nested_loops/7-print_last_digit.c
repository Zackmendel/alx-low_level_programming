#include "main.h"

/**
 * print_last_digit - short description
 * @a: An integer input
 * function prints the last digit of a number
 * Return: last digit of the number
 */
int print_last_digit(int a)
{
	int n;

	if (a < 0)
		n = -1 * (a % 10);
	else
		n = a % 10;
	_putchar((n % 10) + '0');
	return (n % 10);
}
