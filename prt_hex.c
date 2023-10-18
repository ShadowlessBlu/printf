#include "main.h"
/**
 * prt_hex - Prints a hexadecimal value.
 * @value: The value to print in hexadecimal.
 *
 * Return: The number of characters printed.
 */
int prt_hex(int value)
{
    int count = 0;
    char hex_chars[] = "0123456789ABCDEF";

    if (value < 16)
    {
        _putchar(hex_chars[value]);
        count++;
    }
    else
    {
        count += prt_hex(value / 16);
        _putchar(hex_chars[value % 16]);
        count++;
    }

    return (count);
}
