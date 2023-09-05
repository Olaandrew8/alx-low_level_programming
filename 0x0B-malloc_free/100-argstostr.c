#include "main.h"
#include <stdlib.h>
/**
  *argstostr - func concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int i, z, a, size;
	char *arg;

	size = 0;
	a = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		z = 0;
		while (av[i][z])
		{
			size++;
			z++;
		}
		size++;
		i++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		z = 0;
		while (av[i][z])
		{
			arg[a] = av[i][z];
			z++;
			a++;
		}
		arg[a] = '\n';
		a++;
		i++;
	}
	arg[a] = '\0';
	return (arg);
}
