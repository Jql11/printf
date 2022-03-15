#include "main.h"

/**
 * print_rot - print the rot13'ed string
 * @ap: arguments
 *
 * Return: number of chars printed
 */

int print_rot(va_list ap)
{
	char *str = va_arg(ap, char *);
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	if (str == '\0')
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 'A' || str[i] > 'Z' && str[i] < 'a' || str[i] > 'z')
			_putchar(str[i]);
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
