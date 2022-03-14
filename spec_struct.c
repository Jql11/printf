#include "main.h"
#include <stdio.h>
/**
 * spec_struct -  checks if format specifier has been found
 * @ch: char to be checked
 *
 * Return: pointer to a function to print correct format
 */

int (*spec_struct(char ch))(va_list)
{
	int i;

	t_modifier specifier[] = {
		{'c', print_char},
		{'s', print_str},
/*		{'r', print_rev}, */
/*		{'%', print_percent}, */
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};

	for (i = 0; specifier[i].character != '\0'; i++)
	{

		if (specifier[i].character == ch)
			break;
	}
	return (specifier[i].type_to_print);
}
