#include <stdio.h>
#include <math.h>
#include <stdarg.h>
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
  *convert_binary - print binary
  *@n: integer
  *Return: binary number
  */
int convert_binary(int n) 
{
  long long bin = 0;
  int rem, i = 1;

  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
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

	length = length_digit(b);
	return (length);
}
