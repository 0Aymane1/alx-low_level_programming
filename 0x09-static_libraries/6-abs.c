#include "main.h"

/**
 * _abs - fun, that gives the absolute value of an int
 *
 * @n: takes int type input for fun.
 *
 * Return: Always 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
