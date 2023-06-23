#include <stdio.h>
/**
 *
 */

int main(void)
{
	long long int prime_f;
	long long int div_number;
	long long int i;

	div_number = 612852475143;
	prime_f = 2;
	while (prime_f != 0)
	{
		if ((div_number % prime_f) == 0)
		{
			div_number = div_number / prime_f;
			printf("first if else: prime_f count %lld\n", prime_f);
		}
		else
		{
			i = 2;
			while (i < prime_f)
			{
				if ((prime_f % i) == 0)
				{
					printf("second if else : prime_f count %lld\n", prime_f);
					prime_f++;
				}

				else
				{
					printf("if else area: loop %lld\n", i);
					i++;
				}
			}
		}
		if (div_number == 0)
		{
			printf("%lld\n",prime_f);
			return (0);
		}
	}
}
