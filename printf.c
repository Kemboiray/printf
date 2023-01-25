#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string
 *
 * Return: number of characters printed (excluding the null byte used to end
 * output to strings)
*/
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0, j, retval = 0;
	char *str;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(args, int));
					retval += 1;
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(null)";
					for (j = 0; str[j]; j++)
					{
						_putchar(str[j]);
						retval += 1;
					}
					break;
				default:
					break;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			retval += 1;
		}
		i++;
	}
	va_end(args);
	return (retval);
}
