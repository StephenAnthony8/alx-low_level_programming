#include "main.h"
/**
 * main - prints out '_putchar' via the custom _putchar() function
 * Return: 0
 */

int main(void)
{

	char *pc;
	char current_pc;

	pc = "_putchar";
	while (*pc != '\0')
	{
		current_pc = *pc;
		_putchar(current_pc);
		pc++;
	}
	_putchar('\n');
	return (0);

}
