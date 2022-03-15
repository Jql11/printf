#include <stdio.h>
#include "main.h"
/**
  *print_oct - print octal number
  *@ap: integer
  *Return: length of octal number
  */
int print_oct(va_list ap)
{
	unsigned int n;
	int rem[100], i = 0, j;

	n = va_arg(ap, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n > 0)
	{
		rem[i] = n % 8;
		n /= 8;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(rem[j] + '0');
		j--;
	}
	return (i);
}
