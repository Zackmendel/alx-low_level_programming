#include "main.h"

/**
 * main - check the code
 * Description:  function that prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: always o.
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i); 
			_putchar('\n');
		}
	}
}