#include "main.h"

/**
 * print_most_numbers - this function checks a digit (0 through 9)
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; 1 < 58; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
