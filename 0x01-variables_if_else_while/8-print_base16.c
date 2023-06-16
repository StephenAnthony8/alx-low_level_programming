#include <stdio.h>
/**
 * main - prints out single digit numbers of base 10 while only using putchar()
 * Return: exits main function
 */
int main(void)
{
	char i, bn16_0, bn16_9, bn16_a, bn16_f;

	bn16_0 = '0';
	bn16_9 = '9';
	bn16_a = 'a';
	bn16_f = 'f';

	for (i = bn16_0; i <= bn16_9; i++)
	{
		putchar(i);
	}
	for (i = bn16_a; i <= bn16_f; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
