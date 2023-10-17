#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: A character string that specifies the format.
 * @...: Additional arguments corresponding to format specifiers.
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	int invt = 0;
	va_list argu;

	if (format == NULL)
		return (-1);

	va_start(argu, format);

	if (format && *format)
	{
		invt = parse_format(format, argu);
	}

	va_end(argu);

	return (invt);
}
