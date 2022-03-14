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
	int len = 0, i;
	int (*f)(va_list);

	if (format == NULL) /* check if no format and return -1 */
		return (-1);

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)/* start moving through the format */
	{
		len++; /* incremeanting len for return */
		if (format[i] != '%')
			_putchar(format[i]);
		else /* check for % and it finds one */
		{  /* check if next char is end of string */
			if (format[i + 1] == '\0' || format[i + 1] == '%')
			{
				_putchar('%');
				if (format[i + 1] == '\0')
					return (len);
				i++; /* frm % skip to next char to ignore 2nd%*/
			}
			else /* we got % and next char is not null or % */
			{
				f = spec_struct(format[i + 1]);
				if (f != NULL)
				{
					len += f(ap);
					i++;
					len = len - 1;
				}
			}
		}
	}
	va_end(ap);
	return (len);
}
