#include "main.h"

/**
 * _isalpha - checks if letter is lower & upper
 *
 * @c: takes input from other fun.
 *
 * Return: 1 is c if true else 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && C <= 90)
		return (1);
	return (0);
}
