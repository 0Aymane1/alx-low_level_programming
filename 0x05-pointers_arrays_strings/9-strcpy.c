#include "main.h"

/**
 * *_strcpy - copies the str pointed by src
 *
 * @dest: char type str
 * @src: char type str
 *
 * Description: Copy the str pointed to by pointer 'src' to
 * the buffer pointed to by 'dest'
 * Return: Pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
