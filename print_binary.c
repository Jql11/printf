#include <stdio.h>
#include "main.h"
/**
  *convert_binary - print binary
  *@n: integer
  *Return: binary number
  */
int convert_binary(int n)
{
	int bin = 0;
	int rem, i = 1;

	if (n == 0)
	{
		bin = 0;
	}
	else
	{
		while (n > 0)
		{
			rem = n % 2;
			n /= 2;
			bin += rem * i;
			i *= 10;
		}
	}
	return (bin);
}
/**
  *print_binary - print binary
  *@ap: arguments
  *Return: count character
  */
int print_binary(va_list ap)
{
	int n = va_arg(ap, int);
	int length, b;

	b = convert_binary(n);

	length = print_number(b);
	return (length);
}
