#include "main.h"
/**
 * prt_oct - Prints an unsigned integer in octal format.
 * @num: The unsigned integer to print in octal.
 *
 * Return: The number of characters printed.
 */
int prt_oct(unsigned int num)
{
    int count = 0;

    if (num == 0)
    {
        _putchar('0');
        count++;
    }
    else
    {
        count += prt_oct_recur(num);
    }

    return (count);
}
