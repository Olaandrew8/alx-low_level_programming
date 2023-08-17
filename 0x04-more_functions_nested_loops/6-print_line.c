#include "main.h"

/**
 * peint_line - this function drwas a straight line in the terminal
 * @n: number of times
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
