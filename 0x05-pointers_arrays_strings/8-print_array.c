#include "main.h"
/**
 * print_array - func prints element of an array
 * @a: array name
 * @n: number of element of array to be printed
 *
 *
 */
void print_array(int *a, int n)
{
	int index_of_array;

	for (index_of_array = 0; index_of_array < n; index_of_array++)
	{
		printf("%d", a[index_of_array]);
		if (index_of_array != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
