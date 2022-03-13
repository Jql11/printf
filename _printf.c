#include "main.h"
#include <stdio.h>
/**
 * _printf -  a function produces output according to a format
 * @format: string to print, may containt char or format specifiers
 *
 * Return: number of char printed (excluding \0 used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int len = 0, i, j = 0;
	int (*f)(va_list);

	t_modifier specifier[] = {
		{'c', print_char},
		{'s', print_str},
/*		{'r', print_rev}, */
/*		{'%', print_percent}, */
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};
	if (format == NULL) /* check if no format was given then stop and return -1 */
		return (-1);

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)   	/* start moving through the format */
	{
		len++;  		/* incremeanting len to return as it does */
		if (format[i] != '%')
			_putchar(format[i]);
		else /* check for % and it finds one */
		{
			if (format[i + 1] == '\0' || format[i + 1] == '%') /* check if next char is end of string */
			{
				_putchar('%');
				if (format[i + 1] == '\0')
					return (len);
				i++; /* move onto the next char because we are still on % and we are to skip/ignore next % */
			}
			else /* we got % and next char is not null or % */
			{
				while (specifier[j].character != '\0') /* check if next char is part of the list of specifier */
				{
					if (specifier[j].character == format[i + 1])
					{
						f = specifier[j].type_to_print;
						if (f != NULL)
						{
							len += f(ap);
							i++;
							len = len - 1;
						}
					}
					j++;
				}
			}
		}
	}
	va_end(ap);
	return (len);
}
