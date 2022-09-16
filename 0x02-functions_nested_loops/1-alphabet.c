#include "main.h"

/**
 * main - check the code
 *
 * Return: Always0 (Success)
 */
int main(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
	print_alphabet();
	return (0);
}
