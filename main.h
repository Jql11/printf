#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct modifiers
{
	char *character;
	int (*type_to_print)(va_list ap);
} t_modifier;


int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(const char *s);



#ifndef /* MAIN_H */
