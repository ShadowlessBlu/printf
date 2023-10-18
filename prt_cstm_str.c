#include "main.h"
/**
 * prt_cstm_str - Prints a custom string with non-printable characters.
 * @s: The string to print.
 * Return: The number of characters printed.
 */
int prt_cstm_str(const char *s)
{
    int count = 0;

    while (*s)
    {
        if (*s >= 32 && *s < 127)
        {
            _putchar(*s);
            count++;
        }
        else
        {
            _putchar('\\');
            _putchar('x');
            if (*s < 16)
            {
                _putchar('0');
                count++;
            }
            count += prt_hex(*s);
        }
        s++;
    }

    return (count);
}
