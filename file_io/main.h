#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> /* for size_t */
#include <unistd.h> /* for ssize_t */

/* Prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);

#endif /* MAIN_H */
