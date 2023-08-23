#include "main.h"
/**
 * _strcat - func concatenates two strings
 * @dest: Irout value
 * @src: Irout value
 * Return: void
 */
char *_streat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
