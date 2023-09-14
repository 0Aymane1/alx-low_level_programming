#include "main.h"

/**
 * print_most_numbers - print all except 2 and 4
 *
 * Return: Always 0 (success)
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 48 && a != 52)
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
