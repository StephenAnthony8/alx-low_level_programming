#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints out the commandline arguments per line
 * @argc: array count
 * @argv: commandline array
 * Return: terminates the function
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
