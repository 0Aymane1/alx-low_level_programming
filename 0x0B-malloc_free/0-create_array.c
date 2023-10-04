#include "main.h"

/**
 * create_array - creates an array of chars,
 * @size: size of the array
 * @c: char to int
 * Return: pointer to the array int or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;
}
