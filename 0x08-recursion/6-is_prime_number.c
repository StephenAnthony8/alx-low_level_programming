#include "main.h"
/**
 * is_prime_number_count - iterates through n with i
 * @n: value to be calculated
 * @i: iterating value
 * Return: 1 or 0
 */
int is_prime_number_count(int n, int i)
{
	if (i > n / 2)
		return (1);
	if (n % i == 0)

		return (0);
	else if (n % i != 0)
		i = is_prime_number_count(n, i + 1);
	return (i);


}
/**
 * is_prime_number - Calculates whether a number is prime or not
 * @n: potential prime number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 0)
		n = -n;
	if (n  == 1)
		return (0);
	else if (n > 1)
		i = is_prime_number_count(n, i);
	return (i);

}
