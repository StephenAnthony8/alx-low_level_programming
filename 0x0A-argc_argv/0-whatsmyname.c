#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints out the program name
 * @argc: unused array count
 * @argv: commandline array
 * Return: terminates the function
 */
int main(int argc __attribute__((unused)), char **argv)
{

	printf("%s\n", argv[0]);
	return (0);
}
