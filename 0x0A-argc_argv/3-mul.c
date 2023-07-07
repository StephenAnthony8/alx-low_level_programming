#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies the commandline arguments
 * @argc: array count
 * @argv: commandline array
 * Return: terminates the function
 */
int main(int argc, char **argv)
{
	int i, j;

	j = i = 1;
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	while (i < argc)
	{
		j *= strtol(argv[i], NULL, 10);
		i++;
	}
	printf("%d\n", j);
	return (0);
}
