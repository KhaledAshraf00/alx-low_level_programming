#include "main.h"
/**
 * _puts - print string to stdout
 * @str: pointer to string
 * Return: no return
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
