#include "main.h"
#include <stdio.h>

/**
 * *_strstr - func locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: points to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, z;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (z = 0; needle[z] != '\0'; z++)
		{
			if (haystack[i + z] != needle[z])
				break;
		}
		if (!needle[z])
			return (&haystack[i]);
	}
	return (NULL);
}
