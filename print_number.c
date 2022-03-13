#include "main.h"
#include <stdio.h>
/**
*length_digit - number of digit
*@n: integer
* Return: Always 0.
*/
int length_digit(int n)
{
	int length = 0;

	while (n != 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}
/**
*myPow - to the power of x
*@x: base
*@y: exponential
* Return: Always 0.
*/
int myPow(int x, int y)
{
	int i;
	int number = 1;

	for (i = 0; i < y; ++i)
		number *= x;
	return (number);
}

/**
*print_number - prints an integer
*@n: integer
* Return: Always 0.
*/

int print_number(int n)
{
	int d = length_digit(n);
	int exp;
	int len;

	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		for (exp = d - 1; exp >= 0; exp--)
		{
			_putchar((n / (myPow(10, exp)) % 10) * -1 + '0');
		}
		len = d + 1;
	}
	else
		for (exp = d - 1; exp >=  0; exp--)
		{
			_putchar((n / (myPow(10, exp))) % 10 + '0');
			len = d;
		}
	return (len);
}


