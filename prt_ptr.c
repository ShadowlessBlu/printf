#include "main.h"
/**
 * prt_ptr - Prints a pointer address in hexadecimal format.
 * @ptr: The pointer to print.
 * Return: Number of characters printed.
 */
int prt_ptr(void *ptr)
{
	int count = 0;
	unsigned long int p = (unsigned long int)ptr;

	_putchar('0');
	_putchar('x');
	count += 2;
	count += prt_hexa(p, 0);

	return (count);
}
