#include "main.h"

/**
 * _strncat - func concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, z;

	i = 0;
	z = 0;

	while (dest[i] != '\0')
		i++;

	while (src[z] != '\0' && z < n)
	{
		dest[i] = src[z];
		i++;
		z++;
	}

	dest[i] = '\0';

	return (dest);
}
