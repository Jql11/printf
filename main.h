#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct modifiers
{
	char *specifier;
	int *(*f)(va_list ap);
} conversion_specifiers;


int _printf(const char *format, ...);

/* print numbers */



#ifndef /* MAIN_H */
