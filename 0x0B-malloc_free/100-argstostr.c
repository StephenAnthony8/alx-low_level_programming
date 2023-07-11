#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenates commandline input into one array
 * @ac: commandline count
 * @av: commandline vectors
 * Return: new array
 */
char *argstostr(int ac, char **av)
{
	int count, i, j, k;
	char *arr;

	k = i = count = 0;
	if ((ac == 0) || (av == NULL))
		return (0);

	for (; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
	arr = malloc(sizeof(char) * (count + ac + 1));
	if (arr == NULL)
		return (0);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			arr[k] = av[i][j];
			k++;
		}
		arr[k] = '\n';
		k++;
	}
	arr[k] = '\0';
	return (arr);
}
