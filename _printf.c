#include "main.h"

/**
 * _printf -  a function produces output according to a format
 * @format: string to print, may containt char or format specifiers
 *
 * Return: number of char printed (excluding \0 used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list ap;
        int lenght;
	len = _strlen(format):

	t_modifier conversion_specifiers[] = {
		{"c", print_char}
		{"s", print_str}
		{"%", print_percent}
		{"d", print_base10_num}
		{"i", print_int}
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	//

	va_end(ap);
	return (len);
}
