#include "main.h"

/**
  *print_char - print char
  *@ap: arguments
  */
int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
