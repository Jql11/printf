#include <stdio.h>
#include "main.h"
/**
  *convert_binary - print binary
  *@n: integer
  *Return: binary number
  */
int print_binary(va_list ap)
{
	unsigned int n;
	int bin = 0;
	int rem, i = 1;
	n = va_arg(ap, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n > 0)
	{
			rem = n % 2;
			n /= 2;
			bin += rem * i;
			i *= 10;
	}
	return (print_number(bin));
}
