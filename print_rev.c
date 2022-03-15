#include "main.h"
#include <stdio.h>
/**
 * print_rev - returns value of a string
 * @ap: args(format) from printf
 * Return: count of char printed
 */

int print_rev(va_list ap)
{
	int count, count2;
	char *s;

	count = 0;

	s = va_arg(ap, char*);

	if (*s == '\0')
	{
		s = "nil";
		return (0);
	}
	else
	{
		while (s[count] != '\0')
			count++;
	}

	for (count2 = count - 1; count2 >= 0; count2--)
	{
		_putchar(s[count2]);
	}
	return (count);
}
