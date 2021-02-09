#include "holberton.h"

int _putchar(char c);

/**
 * print_sign - check the code.
 *
 * @n: is an integer argument
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (1);
}
return (0);
}
