#include "main.h"

/**
 * print_char - prints a single character
 * @arg: va_list containing the character to be printed
 *
 * Return: 1
 */
int print_char(va_list arg)
{
    return (_putchar(va_arg(arg, int)));
}

/**
 * print_str - prints a string
 * @arg: va_list containing the string to be printed
 *
 * Return: number of characters printed
 */
int print_str(va_list arg)
{
    char *str = va_arg(arg, char *);

    if (str == NULL)
        str = "(null)";

}