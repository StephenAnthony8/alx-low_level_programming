#include <stdio.h>
/**
 * main - prints out single digit numbers of base 10 using putchar
 * Return: exits main function
 */
int main(void)
{
	int i, bn0, bn9;

	bn0 = '0';
	bn9 = '9';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
