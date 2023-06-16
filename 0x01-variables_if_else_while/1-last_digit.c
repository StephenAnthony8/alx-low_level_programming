#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Calculates a random number and outputs last digit status
 * Return: terminates function execution
 */
int main(void)
{
	int n, lnn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	lnn = (n % 10);

	if (lnn > 5)
		printf("The last digit of %d is %d and is greater than 5\n", n, lnn);
	else if ((lnn != 0) && (lnn < 6))
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, lnn);
	else
		printf("The last digit of %d is %d and is 0\n", n, lnn);

	return (0);
}
