#include <stdio.h>
/**
 * main - prints out the alphabet in lowercase
 * Return: exits main function
 */
int main(void)
{
	char i, alp_a, alp_z;

	alp_a = 'a';
	alp_z = 'z';

	for (i = alp_a; i <= alp_z; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
