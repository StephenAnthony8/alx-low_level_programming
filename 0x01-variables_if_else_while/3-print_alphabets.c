#include <stdio.h>
/**
 * main - prints out the alphabet in lowercase & uppercase
 * Return: exits main function
 */
int main(void)
{
	char i, alpha_a, alpha_z, alpha_A, alpha_Z;

	alpha_a = 'a';
	alpha_z = 'z';

	for (i = alpha_a; i <= alpha_z; i++)
	{
		putchar(i);
	}
	alpha_A = 'A';
	alpha_Z = 'Z';

	for (i = alpha_A; i <= alpha_Z; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
