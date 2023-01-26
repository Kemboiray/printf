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
	int digit, size, size2, i;
	char *array;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
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
	return (size2 + 1);
}
