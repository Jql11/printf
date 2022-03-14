#include "main.h"

/**
  *print_str - print string
  *@ap: arguments
  *Return: count characters
  */
int print_str(va_list ap)
{
	unsigned int i = 0;
	char *str;

	str = va_arg(ap, char *);

	if (str == NULL)
		str = "(nil)";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
