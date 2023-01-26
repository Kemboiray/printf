#include "main.h"
/**
 * print_unsigned - prints to stdout
 * @n: integer to print
 * @base: smth
 *
 * Return: size of integer printed
 */
int print_unsigned(unsigned int n, int base)
{
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	count = print_unsigned_recursive(n, base);
	return (count);
}

/**
 * print_unsigned_uppercase - prints to stdout
 * @n: integer to print
 * @base: smth
 *
 * Return: size of integer printed
 */
int print_unsigned_uppercase(unsigned int n, int base)
{
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	count = print_unsigned_recursive_uppercase(n, base);
	return (count);
}

/**
 * print_unsigned_recursive_uppercase - prints to stdout
 * @n: integer to print
 * @base: smth
 *
 * Return: size of integer printed
 */
int print_unsigned_recursive_uppercase(unsigned int n, int base)
{
	int count = 0;

	if (n == 0)
		return (0);
	count = print_unsigned_recursive_uppercase(n / base, base);
	_putchar(n % base >= 10 ? n % base - 10 + 'A' : n % base + '0');
	count++;
	return (count);
}

/**
 * print_unsigned_recursive - prints to stdout
 * @n: integer to print
 * @base: smth
 *
 * Return: size of integer printed
 */
int print_unsigned_recursive(unsigned int n, int base)
{
	int count = 0;

	if (n == 0)
		return (0);
	count = print_unsigned_recursive(n / base, base);
	_putchar(n % base >= 10 ? n % base - 10 + 'a' : n % base + '0');
	count++;
	return (count);
}
