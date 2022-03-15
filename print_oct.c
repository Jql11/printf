#include "main.h"


int print_octal(va_list ap)
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
