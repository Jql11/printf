#include "main.h"

/**
  *print_unsigned_int: print 0 or positive integer
  *@ap: arguments
  * Return: count characters
  */
int print_unsigned_int(va_list ap)
{
	int n = va_arg(ap, int);
	int length;

	if (n < 0)
		return (-1);
	else
		length = print_number(n);

	return (length);
}
