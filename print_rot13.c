#include "main.h"

/**
 * print_rot13 - print the rot13'ed string
 * @ap: arguments
 *
 * Return: number of chars printed
 */

int print_rot (va_list ap)
{
	char *str = va_arg(ap, char *);
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (s[i] < 'A' || s[i] > 'Z' && s[i] < 'a' || s[i] > 'z')
			_putchar(s[i]);
		else
		{
			for (j = 0; j < 52 ; j++)
			{
				if (str[i] == a[j])
					_putchar(b[j]);
			}
		}
	}
	return (i);
}
