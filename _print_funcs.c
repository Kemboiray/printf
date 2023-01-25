#include "main.h"

/**
 * print_char - prints a single character
 * @arg: va_list containing the character to be printed.
 *
 * Return: 1
 */
int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * print_str - prints a string.
 * @arg: va_list containing the string to be printed.
 *
 * Return: number of characters printed.
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

/**
 * print_int - prints an integer
 * @arg: va_list containing the integer to be printed
 *
 * Return: 1
 */
int print_int(va_list arg)
{
	int n = va_arg(arg, int), count = 0, number, digits, i;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	number = n;
	digits = 1;

	while (number > 9)
	{
		number /= 10;
		digits++;
	}

	for (i = 0; i < digits; i++)
	{
		_putchar((n % (int)pow(10, i + 1) / (int)pow(10, i)) + '0');
		count++;
	}
	return (count);
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
