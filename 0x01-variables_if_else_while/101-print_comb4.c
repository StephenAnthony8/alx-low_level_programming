#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 * Return: terminates main's execution with 0
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
		for (j = '0'; j <= '9'; j++)
			for (k = '0'; k <= '9'; k++)
				if (((i != j) && (i != k) && (j != k)) && (i < j) && ((j < k) && (i < k)))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if ((i == '7') && (j == '8') && (k == '9'))
					{
						putchar('\n');
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
	return (0);
}
