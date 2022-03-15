#include "main.h"
/**
  *print_unsigned_int - print positive and 0 integer
  *@ap: argument
  *Return: count number
  */
int print_unsigned_int(va_list ap)
{
	unsigned int n;
	int rem[32], i = 0, j;

	n = va_arg(ap, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n > 0)
	{
		rem[i] = n % 10;
		n /= 10;
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

