#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <limits.h>

/* print function */
int _putchar(char c);

/* question 0 */
ssize_t read_textfile(const char *filename, size_t letters);
#endif
