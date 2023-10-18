#include "main.h"

/**
 * send_form - sends and prints the format string.
 * @format: The format string to parse.
 * @args: The va_list of arguments.
 *
 * Return: Number of characters printed.
 */
int send_form(const char *format, va_list args)
{
	int count = 0;

	if (format == NULL)
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args, int);

				_putchar(c);
				count++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);

				if (s == NULL)
					s = "(null)";
				count += prt_str(s);
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);

				count += prt_int(num);
			}
			else if (*format == 'u')
			{
				unsigned int num = va_arg(args, unsigned int);

				count += prt_unsigned(num);
			}
			else if (*format == 'o')
			{
				unsigned int num = va_arg(args, unsigned int);

				count += prt_oct(num);
			}
			else if (*format == 'x' || *format == 'X')
			{
				unsigned int num = va_arg(args, unsigned int);

				count += prt_hexa(num, (*format == 'X'));
			}
			else if (*format == 'p')
			{
				void *ptr = va_arg(args, void *);

				count += prt_ptr(ptr);
			}
			else if (*format == 'b')
			{
				unsigned int num = va_arg(args, unsigned int);

				count += prt_bin(num);
			}
			else if (*format == 'S')
			{
				char *s = va_arg(args, char *);

				if (s == NULL)
					s = "(null)";
				count += prt_cstm_str(s);
			}

			format++;
		}
		else
		{
			_putchar(*format);
			count++;
			format++;
		}
	}

	return (count);
}
