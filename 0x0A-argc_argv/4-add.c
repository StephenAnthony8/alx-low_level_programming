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
	int i, j, value;
	char *endptr;

	i = 1;
	value = j = 0;
	if (argc <= 1)
	{
		puts("0");
		return (0);
	}
	while (i < argc)
	{
		value = strtol(argv[i], &endptr, 10);
		if (*endptr != '\0')
		{
			puts("Error");
			return (1);
		}
		j += value;
		i++;
	}
	printf("%d\n", j);
	return (0);
}
