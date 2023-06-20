#include "main.h"

/**
 * print_alphabet - puts out the alphabet onto the stdout
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}

/**
 * main - executes the print_alphabet function
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
