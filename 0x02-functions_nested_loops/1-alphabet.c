#include "main.h"

/**
 * print_alphabet
 * short description:prints alphabet in
 * lowercase followed by a new line
 *
 * Return: Always0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
