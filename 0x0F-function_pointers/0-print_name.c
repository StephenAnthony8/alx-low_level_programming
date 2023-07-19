#include "function_pointers.h"
/**
 * print_name - prints out a name using putchar
 * @name: string to be printed out
 * @f: function to be used for printing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
