#ifndef MAIN_H
#define MAIN_H

/* print function */
int _putchar(char c);

/* question 0 */
unsigned int binary_to_uint(const char *b);

/* question 1 */
#include <limits.h>
void print_binary(unsigned long int n);

/* question 2 */
int get_bit(unsigned long int n, unsigned int index);

/* question 3 */
int set_bit(unsigned long int *n, unsigned int index);

/* question 4 */
int clear_bit(unsigned long int *n, unsigned int index);

/* question 5 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
