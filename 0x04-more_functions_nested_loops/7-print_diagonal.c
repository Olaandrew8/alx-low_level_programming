#include "main.h"

/**
 * print_diagonal - this function draws a diagonal line
 * @n: number of var
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
