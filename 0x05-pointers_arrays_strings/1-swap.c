#include "main.h"
/**
 * swap_int - this func swaps values of two int
 * @a: swap and stores address of b
 * @b: swap and stores address of a
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
