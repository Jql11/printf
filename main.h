#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct modifiers - format specifier's info
 * @character: char to find
 * @type_to_print: call function to print right format
 *
 * Description: Longer description
 */

typedef struct modifiers
{
	char character;
	int (*type_to_print)(va_list ap);
} t_modifier;


int _printf(const char *format, ...);
int (*spec_struct(char ch))(va_list);
int _putchar(char c);
int print_char(va_list ap);
int print_str(va_list ap);
int print_percent(va_list ap);
int print_int(va_list ap);
int print_number(int n);
int _strlen(char *s);
int print_unsigned_int(va_list ap);
int print_binary(va_list ap);
/* int _puts(char *str); */

#endif /* MAIN_H */
