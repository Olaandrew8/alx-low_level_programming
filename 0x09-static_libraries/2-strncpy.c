#include "main.h"

/**
 * _strncpy - func copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int z;

	z = 0;

	while (src[z] != '\0' && z < n)
	{
		dest[z] = src[z];
		z++;
	}

	while (z < n)
	{
		dest[z] = '\0';
		z++;
	}

	return (dest);
}
