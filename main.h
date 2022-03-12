#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

/* printoutput function */
int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);

#ifndef /* MAIN_H */
