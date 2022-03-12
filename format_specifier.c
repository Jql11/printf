#include "main.h"

/**
  *print_char - print char
  *@args: arguments
  */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

int print_str(va_list args)
{
	unsigned int i = 0;
	char *str;

	str = va_arg(args, char *);

	if (*str == NULL)
		str = "(nil)";

	while(str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (1);
}
i
