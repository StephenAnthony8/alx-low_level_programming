#include <stdio.h>
/**
 * main - prints out the alphabet in lowercase save for q  and e
 * Return: exits main function
 */
int main(void)
{
	char i, alph_a, alph_z;

	alph_a = 'a';
	alph_z = 'z';

	for (i = alph_a; i <= alph_z; i++)
	{
		if ((i != 'q') && (i != 'e'))
			putchar(i);
	}
	putchar('\n');
	return (0);
}
