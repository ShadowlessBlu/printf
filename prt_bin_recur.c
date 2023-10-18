#include "main.h"
/**
 * prt_bin_recur - Recursively prints an unsigned integer in binary.
 * @num: The unsigned integer to print in binary.
 *
 * Return: The number of characters to printed.
 */
int prt_bin_recur(unsigned int num)
{
    int count = 0;

    if (num != 0)
    {
        count += prt_bin_recur(num >> 1);
        _putchar((num & 1) + '0');
        count++;
    }

    return (count);
}
