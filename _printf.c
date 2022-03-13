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
        int len, i, j;
	int (*f)(va_list);
	len = 0;
	
	t_modifier specifier[] = {
		{'c', print_char},
		{'s', print_str},
/*		{'r', print_rev},
/*		{'%', print_percent},
/*		{'d', print_base10_num},
		{'i', print_int},*/
		{'\0', NULL}
	};
/* check if no format was given then stop and return -1 */
	if (format == NULL)
		return (-1);

	va_start(ap, format);
	/* start moving through the format */
	for (i = 0; format[i] != '\0'; i++)
	{
		/* incremeanting len to return as it does */
		len++;
		if (format[i] != '%')
			_putchar(format[i]);

/* check for % and it finds one */
		else
		{
			/* check if next char is end of string and return */
			if (format[i + 1] == '\0' || format[i+ 1] == '%')
			{
				_putchar('%');
				if ( format[i + 1] == '\0')
					return(len);
/* move onto the next char because we are still on % and we are to skip/ignore next % */
				i++;
			}
			/* we got % and next char is not null or % */ 
			else
			{
				j = 0;
/*				printf("Character is %c\n", specifier[j].character);
				printf("Format is %c", format[i + 1]); */
				/* check if next char is part of the list of specifier */
			        while (specifier[j].character != '\0')
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
