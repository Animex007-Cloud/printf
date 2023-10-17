#include <unistd.h>

/**
 * _putchar - entry point
 * Description: write the character c to stdout
 *
 * Return: 1 0n success and -1 on error
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}

