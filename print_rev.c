#include "main.h"
/**
 * _print_rev_recursion- check the code
 * @ap: string given
 * Return: Always 0.
 */

int _print_rev_recursion(va_list ap)
{
	char *s = va_args(ap, char*);

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		return (_strlen(s));
	}
	else if (*s == '\0')
		return (0);
}

