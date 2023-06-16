#include <stdio.h>
/**
 * main - prints out single digit numbers of base 10
 * Return: exits main function
 */
int main(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
