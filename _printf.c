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
        int len, i, j;
	len = 0;

	t_modifier specifier[] = {
		{"c", print_char}
		{"s", print_str}
		{"%", print_percent}
		{"d", print_base10_num}
		{"i", print_int}
		{NULL, NULL}
	};

/* check if no format was given then stop and return -1 */
	if (format == NULL)
		return (-1);

	va_start(ap, format);
	/* start moving through the format */
	for (i = O; format[i] != '\0'; i++)
	{
		/* incremeanting len to return as it does */
		len++;

		if (format[i] != %)
		{
		        _putchar(format[i]);
		}
		/* check for % and it finds one */
		if (format[i] == %)
		{
			/* check if next char is end of string and return */
			if (format[i + 1] == '\0')
			{
				return(len);
			}

			/* if not end of string it will move to next char */
			else
			{
				i++;
				j = 0;

				/* check if next char is part of the list of specifier */
			        while (*(specifiers[j].character) != NULL)
				{
					if (*(specifiers[j].character) == format[i])
						len = specifiers[j].type_to_print(ap);
				}
				j++;
			}
		}
	}
	va_end(ap);
	return (len);
}
