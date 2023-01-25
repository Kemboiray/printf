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
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
#if 0
/**
 * print_int - prints an integer
 * @arg: va_list containing the integer to be printed
 *
 * Return: 1
 */
int print_int(va_list arg)
{
	int n = va_arg(arg, int);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 9)
		print_int(n / 10);
	_putchar(n % 10 + '0');
	return (1);
}

/**
 * print_unsigned - prints an unsigned integer
 * @arg: va_list containing the unsigned integer to be printed
 *
 * Return: number of characters printed
 */
int print_unsigned(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int count = 0;

	if (n > 9)
	/*	count += print_unsigned(n / 10);*/
	_putchar(n % 10 + '0');
	count++;
	return (count);
}
#endif
/**
 * print_percent - prints a percent sign
 *
 * Return: 1
 */
int print_percent(void)
{
	_putchar('%');
	return (1);
}
