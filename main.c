#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;

    ui = (unsigned int)INT_MAX + 1024;
    
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Percent:[%%]\n");
    len = _printf("Percent:[%%]\n");
    printf("Character:[%c]\n", 'H');
    _printf("Character:[%c]\n", 'H');
    printf("String:[%s]\n", "I am a string !");
    _printf("String:[%s]\n", "I am a string !");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);

    return (0);
}

