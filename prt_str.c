#include "main.h"
/**
 * prt_str - Prints a string and handles non-printable characters.
 * @str: The string to print.
 *
 * Return: Number of characters.
 */
int prt_str(const char *str)
{
	int count = 0;

	while (*str)
	{
		if (*str >= 32 && *str < 127)
		{
			_putchar(*str);
			count++;
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			if (*str < 16)
			{
				_putchar('0');
				count++;
			}
			count += 2;
			count += prt_hex(*str);
		}
		str++;
	}

	return (count);
}
