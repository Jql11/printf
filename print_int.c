#include "main.h"

/**
  *print_int: print integer
  *@ap: arguments
  */
int print_int(va_list ap)
{
	int n = va_arg(ap, int);
	int length;

	length = print_number(n);

	return (length);
}
