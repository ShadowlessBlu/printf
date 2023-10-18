#include "main.h"
/**
 * prt_hexa - Prints an unsigned integer in hexadecimal format.
 * @num: The unsigned integer to print.
 * @uppercase: If 1, use uppercase letters (A-F); if 0, use lowercase (a-f).
 *
 * Return: The number of characters printed.
 */
int prt_hexa(unsigned int num, int uppercase)
{
    int count = 0;
    char hex_chars[] = "0123456789abcdef";

    if (uppercase)
    {
        hex_chars[10] = 'A';
        hex_chars[11] = 'B';
        hex_chars[12] = 'C';
        hex_chars[13] = 'D';
        hex_chars[14] = 'E';
        hex_chars[15] = 'F';
    }

    if (num < 16)
    {
        _putchar(hex_chars[num]);
        count++;
    }
    else
    {
        count += prt_hexa(num / 16, uppercase);
        _putchar(hex_chars[num % 16]);
        count++;
    }

    return (count);
}
