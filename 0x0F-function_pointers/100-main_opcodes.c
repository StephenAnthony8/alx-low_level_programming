#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
int main(int argc,char **argv)
{
	unsigned char *funct;
	int byte_val, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte_val = atoi(argv[1]);
	if (byte_val < 0)
	{
		printf("Error\n");
		exit(2);
	}

	funct = (unsigned char *)main;
	for (i = 0; i < byte_val; i++)
		printf("%02hhx ", funct[i]);
	printf("\n");
	return (0);

}
