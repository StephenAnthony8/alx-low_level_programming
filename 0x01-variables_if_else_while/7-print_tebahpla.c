#include <stdio.h>
/**
 * main - prints out the reversed alphabet in lowercase
 * Return: exits main function
 */
int main(void)
{
	char i, alp_a, alp_z;

	alphab_a = 'a';
	alphab_z = 'z';

	for (i = alp_z; i >= alp_a; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
