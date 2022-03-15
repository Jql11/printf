#include <stdio.h>
#include "main.h"
/**
  *print_hex_cap - print hex with captial letter
  *@ap: integer
  *Return: count hex number
  */
int print_hex_cap(va_list ap)
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
		rem[i] = n % 16;
		n /= 16;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		if (rem[j] < 10)
		{
			_putchar(rem[j] + 48);
		}
		else
			_putchar(rem[j] + 55);
		j--;
	}
	return (i);
}
int print_hex_low(va_list ap)
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
		rem[i] = n % 2;
		n /= 2;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		if (rem[j] < 10)
		{
			_putchar(rem[j] + 48);
		}
		else
			_putchar(rem[j] + 87);
		j--;
	}
	return (i);
}
