#include "main.h"

/**
 * _strchr - start from char
 * @s: string
 * @c: char to start from
 *
 * Return: Always 0 (success)
 */

char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
