#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - func searches a string for any of a set of bytes
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, z;

	for (i = 0; *s != '\0'; i++)
	{
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (*s == accept[z])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
