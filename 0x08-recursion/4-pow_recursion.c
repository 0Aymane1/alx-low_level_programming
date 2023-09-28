#include "main.h"

/**
 * _pow_recursion - Search a str for set of bytes
 * @x: base
 * @y: expo
 * Return: Pointer to the byte in 's' matching one of the bytes in 'accept'
 * or NULL if no byte is found
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
