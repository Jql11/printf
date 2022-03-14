#include "main.h"

/**
* convert_oct - convert decimal number into octal
* @n: number to convert
* Return: octal number
*/
int convert_oct(int n)
{
	int oct = 0;
	int temp = 1;

	while (n != 0)
	{
		oct = oct + (n % 8) * temp;
		n = n / 8;
		temp = temp * 10;
	}

	return (oct);
}

/**
 * print_oct - print octal number
 * @ap: arguments
 * Return: lenght of octal number printed
 */

int print_oct(va_list ap)
{
	int n = va_arg(ap, int);
	int len, oct;

	oct = convert_oct(n);

	len = print_number(oct);

	return (len);
}
