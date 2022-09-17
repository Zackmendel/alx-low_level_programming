#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - short description
 * @n: an input integer
 * function that prints all natural number to 98
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
