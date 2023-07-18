#include "main.h"
/**
 * print_last_digit - Print last digit
 * @num: input number
 * Return: return 0
 */
int print_last_digit(int num)
{
int last = num % 10;
if (last < 0)
{
last *= -1;
}
_putchar (last + '0');
return (last);
}
