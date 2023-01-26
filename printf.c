#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string that contains plain text and conversion
 * specifications
 *
 * Return: number of characters written
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += print_char(args);
					break;
				case 's':
					count += print_str(args);
					break;
				case 'd' || 'i':
				/*case 'i':*/
					count += print_int(args);
					break;
				case '%':
					count += print_percent();
					break;
				default:
					_putchar('%');
					count += _putchar(*format);
					break;
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
