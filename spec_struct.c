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
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'u', print_unsigned_int},
		{'b', print_binary},
		{'o', print_oct},
		{'r', print_rev},
		{'R', print_rot},
		{'x', print_hex_low},
		{'X', print_hex_cap},
		{'\0', NULL}
	};

	for (i = 0; specifier[i].character != '\0'; i++)
	{

		if (specifier[i].character == ch)
			break;
	}
	return (specifier[i].type_to_print);
}
