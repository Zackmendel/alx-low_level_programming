#include "main.h"

/**
 * main - check the code
 * Description: uses _putchar function to print alphabet
 * in lowercase 10 times
 * Return: always o.
 */
int main(void)
{
	char i;
	int j;

	for (j = 0; j< 10; j++)
	{
		for (i ='a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
	print_alphabet_x10();
	return (0);
}
