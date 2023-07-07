#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculates the least amount of coins required for change
 * @argc: array count
 * @argv: commandline array
 * Return: terminates the function
 */
int main(int argc, char **argv)
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, j, coin_count;

	coin_count = j = i = 0;
	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	{
		j = atoi(argv[1]);
		if (j > 1)
			while (i <= 4)
			{
				if ((j - coins[i]) >= 0)
				{
					j -= coins[i];
					coin_count++;
					continue;
				}
				i++;
			}
	}
	printf("%d\n", coin_count);
	return (0);
}
