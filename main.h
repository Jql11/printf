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


/* printoutput function */
int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(const char *s);
int _puts(char *str);

#ifndef /* MAIN_H */
