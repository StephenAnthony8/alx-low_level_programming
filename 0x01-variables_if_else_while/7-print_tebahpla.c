#include <stdio.h>
/**
 * main - prints out the reversed alphabet in lowercase
 * Return: exits main function
 */
int main(void)
{
	char i, alphab_a, alphab_z;

	alphab_a = 'a';
	alphab_z = 'z';

	for (i = alphab_z; i >= alphab_a; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
