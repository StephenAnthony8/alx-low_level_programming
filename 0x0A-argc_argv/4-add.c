#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds the commandline arguments
 * @argc: array count
 * @argv: commandline array
 * Return: terminates the function
 */
int main(int argc, char **argv)
{
	int i, j;

	i = 1;
	j = 0;
	if (argc <= 1)
	{
		puts("0");
		return (0);
	}
	while (i < argc)
	{
		if (!strtol(argv[i], NULL, 10))
		{
			puts("Error");
			return (1);
		}
		j += strtol(argv[i], NULL, 10);
		i++;
	}
	printf("%d\n", j);
	return (0);
}
