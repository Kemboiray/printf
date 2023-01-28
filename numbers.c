#include "main.h"
/**
 * arsize - calculates the size of an integer
 * @n: integer to calculate size of
 *
 * Return: size of integer
 */
int arsize(int n)
{
	int size = 0;

	while (n % 10 != n)
	{
		n = n - (n % 10);
		size += 1;
		n = n / 10;
	}
	return (size + 1);
}

/**
 * print_int - prints an integer to stdout
 * @n: integer to print
 *
 * Return: size of integer printed
 */
int print_int(int n)
{
	int digit, size, size2, i, sign = n;
	char *array;

	if (n == INT_MIN)
	{
		_printf("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		size = arsize(n);
		size2 = size;
		array = malloc((sizeof(char) * size));
		if (array == NULL)
		{
			free(array);
			exit(EXIT_FAILURE);
		}
		while (n > 0)
		{
			digit = n % 10;
			array[size - 1] = (digit + '0');
			n /= 10;
			size--;
		}
		for (i = 0; i < size2; i++)
			_putchar(array[i]);
	}
	free(array);
	if (sign >= 0)
		return (size2);
	else
		return (size2 + 1);
}

/**
 * print_binary - prints to stdout
 * @n: integer to print
 *
 * Return: size of integer printed
 */
int print_binary(unsigned int n)
{
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	count = print_binary_recursion(n);
	return (count);
}

/**
 * print_binary_recursion - prints to stdout
 * @n: integer to print
 *
 * Return: size of integer printed
 */
int print_binary_recursion(unsigned int n)
{
	int count = 0;

	if (n == 0)
		return (0);
	count = print_binary_recursion(n >> 1);
	_putchar((n & 1) ? '1' : '0');
	return (count + 1);
}
