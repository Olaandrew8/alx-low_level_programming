#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: collect the character
 *
 * Return: 1 if c is low or cap, otherwise 0
 */
int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (lower = 'A'; upper <= 'Z'; upper++)
		{
			if (lower == c || upper == c)
			{
				letter = 1;
			}
		}
	}
	return (letter);
}
