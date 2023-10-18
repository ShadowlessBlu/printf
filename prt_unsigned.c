#include "main.h"
/**
 * prt_unsigned - Prints an unsigned integer.
 * @num: The unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int prt_unsigned(unsigned int num)
{
    int count = 0;

    if (num == 0)
    {
        _putchar('0');
        count++;
    }
    else
    {
        count += prt_unsigned_recur(num);
    }

    return (count);
}
