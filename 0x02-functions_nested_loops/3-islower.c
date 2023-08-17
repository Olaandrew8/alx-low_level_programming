#include "main.h"
/**
 * _islower - check for lowercase character
 * @c: is the character to be checked
 * Return: (1) if c is lowercase, otherwise (0)
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
		lower = 1;
		}
	}
	return (lower);
}

