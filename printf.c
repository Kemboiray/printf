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
	int *count_ptr = &count;

	va_start(args, format);
	if (format == NULL || (format[0] == 37 && format[1] == 0))
		return (-1);

	printcs(format, count_ptr, args);
	va_end(args);
	return (count);
}

/**
 * printcs - print format string, arguments and update return value
 * @format: format string
 * @count_ptr: pointer to count
 * @args: args
 *
 * Return: void.
*/
void printcs(const char *format, int *count_ptr, va_list args)
{
	while (*format)
	{
		if (*format == '%')
		{
			format++;
				switch (*format)
				{
					case 'c':
						*count_ptr += print_char(args);
						break;
					case 's':
						*count_ptr += print_str(args);
						break;
					case 'd':
					case 'i':
						*count_ptr += print_int(va_arg(args, int));
						break;
					case 'b':
						*count_ptr += print_binary(va_arg(args, unsigned int));
						break;
					case 'u':
						*count_ptr += print_unsigned(va_arg(args, unsigned int), 10);
						break;
					case 'o':
						*count_ptr += print_unsigned(va_arg(args, unsigned int), 8);
						break;
					case 'x':
						*count_ptr += print_unsigned(va_arg(args, unsigned int), 16);
						break;
					case 'X':
						*count_ptr += print_unsigned_uppercase(va_arg(args, unsigned int), 16);
						break;
					case 'S':
						*count_ptr += print_custom_S(va_arg(args, char *));
						break;
						case 'p':
						*count_ptr += print_pointer_hash(va_arg(args, void *));
						break;
					case '%':
						*count_ptr += print_percent();
						break;
					default:
						_putchar('%');
						*count_ptr += 1 + _putchar(*format);
						break;
				}
		}
		else

			*count_ptr += _putchar(*format);
		format++;
	}
}
