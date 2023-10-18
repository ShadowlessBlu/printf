#include "main.h"
/**
 * prt_unsigned_recur - Recursively prints an unsigned integer.
 * @num: The unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int prt_unsigned_recur(unsigned int num)
{
    int count = 0;

    if (num != 0)
    {
        count += prt_unsigned_recur(num / 10);
        _putchar((num % 10) + '0');
        count++;
    }

    return (count);
}
