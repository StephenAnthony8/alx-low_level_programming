#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

int _putchar(char c);
/* Question 0 */
void print_name(char *name, void (*f)(char *));

/* Question 1 */
typedef unsigned long int size_t;
void array_iterator(int *array, size_t size, void (*action)(int));

/* Question 2 */
int int_index(int *array, int size, int (*cmp)(int));

/* Question 4 */

#endif
