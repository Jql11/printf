#include "main.h"
/**
 * print_rev - returns value of a string
 * @ap: args(format) from printf
 * Return: count of char printed
 */

int print_rev(va_list ap)
{
	int count, count2;
	char *s;

	count = 0;

	*s = va_arg(ap, char*);

	if (*s == NULL)
		printf("nil");

	while (*s != NULL)
	{
		count++;

		for (count2 = count; count2 >= 0; count2--)
		putchar(s[count2]);
	}

	return(count);
}
