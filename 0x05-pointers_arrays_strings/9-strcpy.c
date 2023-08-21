#include "main.h"
/**
 * *_strcpy - func copies string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
