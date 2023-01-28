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
 * print_percent - prints a percent sign
 *
 * Return: 1
 */
int print_percent(void)
{
	_putchar('%');
	return (1);
}

/**
 * print_custom_S - prints a string and replaces non-printable characters
 * with the hexadecimal representation of their ASCII code value,
 * in the format \xXX
 *
 * @s: the string to print
 *
 * Return: the number of characters printed
 */
int print_custom_S(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += _putchar(int_to_hex((s[i] >> 4) & 0xF));
			count += _putchar(int_to_hex(s[i] & 0xF));
		}
		else
			count += _putchar(s[i]);
	}
	return (count);
}

/**
 * int_to_hex - converts an int to its hexadecimal representation
 * @i: int to convert
 *
 * Return: hexadecimal representation of the int
 */
char int_to_hex(int i)
{
	if (i >= 0 && i <= 9)
		return ('0' + i);
	else
		return ('A' + i - 10);
}
