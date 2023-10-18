#include "main.h"
/**
 * prt_oct_recur - Recursively prints an unsigned integer in octal.
 * @num: The unsigned integer to print in octal.
 *
 * Return: The number of characters printed.
 */
int prt_oct_recur(unsigned int num)
{
    int count = 0;

    if (num != 0)
    {
        count += prt_oct_recur(num / 8);
        _putchar((num % 8) + '0');
        count++;
    }

    return (count);
}
