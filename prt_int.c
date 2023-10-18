#include "main.h"
/**
 * prt_int - Prints a signed integer.
 * @num: The integer to print.
 *
 * Return: Number of characters printed.
 */
int prt_int(int num)
{
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	count += prt_unsigned((unsigned int)num);

	return (count);
}
