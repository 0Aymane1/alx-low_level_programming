#include "main.h"

/**
 * _strstr - write the char c to stdout
 * @haystack: The from char
 * @needle: The to char
 *
 * Return: On success haystack.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			n++;
			h++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
