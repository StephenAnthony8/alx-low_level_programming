#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints out the commandline count
 * @argc: array count
 * @argv: unused commandline array
 * Return: terminates the function
 */
int main(int argc, char **argv __attribute__((unused)))
{

	printf("%d\n", argc - 1);
	return (0);
}
