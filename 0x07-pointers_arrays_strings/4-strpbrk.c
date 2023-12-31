#include "main.h"

/**
 * _strpbrk - Search for any set of bytes
 * @s: String
 * @accept: String
 *
 * Return: On success s.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
