#include <stdio.h>
void tortoise_gang(void) __attribute__((constructor));
/**
 * tortoise_gang - runs before main
 */
void tortoise_gang(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

