#include "main.h"

/**
 * print_most_numbers - this function checks a digit (0 to 9)
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; 1 < 58; i++)
	{
		if (i != 50)
		{
			if (i != 52)
			{
				_putchar(i);
			}
		}
	}
	_putchar('\n');
}
