#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - perform an arithmetic operation
 * @argc: command line input length
 * @argv: command line arguments
 * Return: result
 */
int main(int argc, char **argv)
{
	int a, b, result;
	int (*op)(int a, int b);


	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == ('/' || '%')) && ((!a) || (!b)))
	{
		puts("Error");
		exit(100);
	}
	if ((argv[2][0] != '*') && (argv[2][0] != '%') && (argv[2][0] != '/')
				&& (argv[2][0] != '-') && (argv[2][0] != '+') && (argv[2][1] == '\0'))
	{
		puts("Error");
		exit(99);
	}
	op = get_op_func(argv[2]);
	result = op(a, b);

	printf("%d\n", result);
	return (0);
}
