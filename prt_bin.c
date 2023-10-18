#include "main.h"
/**
 * prt_bin - Prints an unsigned integer in binary format.
 * @num: The unsigned integer to print in binary.
 * Return: The number of characters printed.
 */
int prt_bin(unsigned int num)
{
    int count = 0;

    if (num == 0)
    {
        _putchar('0');
        count++;
    }
    else
    {
        count += prt_bin_recur(num);
    }

    return (count);
}
