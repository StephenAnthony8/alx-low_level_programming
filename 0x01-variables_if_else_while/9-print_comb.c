#include <stdio.h>
/**
 * main - prints out single digit numbers of base 10 using putchar
 * Return: exits main function
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
