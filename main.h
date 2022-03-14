#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct modifiers
{
	char character;
	int (*type_to_print)(va_list ap);
} t_modifier;


int _printf(const char *format, ...);
int (*spec_struct(char ch))(va_list);
int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
int print_int(va_list ap);
int print_number(int n);
int _strlen(char *s);
//int _puts(char *str);
// int print_rev(va_list ap)

#endif /* MAIN_H */
