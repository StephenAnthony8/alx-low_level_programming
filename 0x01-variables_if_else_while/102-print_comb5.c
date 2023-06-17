#include <stdio.h>

/**
 * main - Prints all possible different combinations of two two-digit numbers
 * Return: terminates main's execution with 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
		for (j = '0'; j <= '9'; j++)
			for (k = '0'; k <= '9'; k++)
				for (l = '0'; l <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if ((i != '9') || (j != '9') || (k != '9') || (l != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
	putchar('\n');
	return (0);
}
