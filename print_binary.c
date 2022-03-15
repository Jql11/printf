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
	int rem[32], i = 0;
	n = va_arg(ap, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n > 0)
	{
			rem[i] = n % 2;
			n /= 2;
			i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(rem[i] + '0');
		i--;
	}
	return (i);
}
