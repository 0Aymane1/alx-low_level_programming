#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ char should be printed
 *
 */

void print_diagonal(int n)
{
	int i,s;

	for (i = 0; i < n; i++)
	{
		for (s = 0; s < i; s++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
