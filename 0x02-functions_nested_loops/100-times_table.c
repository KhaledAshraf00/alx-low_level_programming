#include "main.h"
/**
 * print_times_table - print the times table to n
 * @n: integer
 * Return: no return
 */
void print_times_table(int n)
{
int num, mult, result;
if (n <= 15 && n >= 0)
{
for (num = 0; num <= n; num++)
{
_putchar('0');
for (mult = 1; mult <= n; mult++)
{
_putchar(',');
_putchar(' ');
result = num * mult;
if (result <= 99)
{
_putchar(' ');
}
if (result <= 9)
{
_putchar(' ');
}
if (result >= 100)
{
_putchar((result / 100) + '0');
_putchar((result / 10) + '0');
}
else if (result <= 99 && result >= 10)
{
_putchar((result / 10) + '0');
}
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
}
