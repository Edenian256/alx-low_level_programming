#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 38, j = 39;
while (i < 48)
{
while (j < 48)
{
putchar(i);
putchar(j);
if (i != 46 || j != 47)
{
putchar(',');
putchar(' ');
}
j++;
}
i++;
j = i + 1;
}
putchar('\n');
return (0);
}
