#include "main.h"

/**
  *print_char - print char
  *@args: arguments
  */
int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
/**
  *print_str - print string
  *@ap: arguments
  */
int print_str(va_list ap)
{
	unsigned int i = 0;
	char *str;

	str = va_arg(ap, char *);

	if (str == NULL)
		str = "(nil)";

	while(str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
/**
  *print_percent: print percent
  *@ap:arguments
  */
int print_percent(__attribute__((unused))va_list ap)
{
	_putchar('%');
	return (1);
}

/**
  *print_integer: print integer
  *@a0: arguments
  */
int print_integer(va_list ap)
{
	int n = va_arg(ap, int);
	int length = print_number(n);

	print_number(n);

	return (length);
}

