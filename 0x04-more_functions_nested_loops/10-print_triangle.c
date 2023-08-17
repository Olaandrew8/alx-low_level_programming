#include "main.h"

/**
 * print_triangle - this func Prints a triangle, using the character #
 * @size: The size of the triangle
 */

void print_triangle(int size)
{
	int hash;
	int index;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; index > 0; index--)
			{
				_putchar('#');
			}
			if (hash == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
