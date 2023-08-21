#include "main.h"
/**
 * puts2 - fun prints one chac out of two starting with the first one
 * @str: used string reference
 * Return: 0
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
